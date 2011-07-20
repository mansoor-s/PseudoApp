#include "filesystemfile.h"
#include <QDebug>

FileSystemFile::FileSystemFile(QObject *parent) : PluginInterface(parent) {
}


FileSystemFile::FileSystemFile(Browser *browser) : PluginInterface(browser) {
    this->Fbrowser = browser;
    this->setPluginName("File");
    this->connect(browser->page()->currentFrame(), SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(jsReset()));
}


void FileSystemFile::jsReset() {
    // Create the FileSystem object if it does not allready exist
    QString fsObject = "if (!window.FileSystem) window.FileSystem = {};";
    this->Fbrowser->page()->currentFrame()->evaluateJavaScript(fsObject);

    //Add File object to the window object as we can ONLY add it there
    this->Fbrowser->page()->currentFrame()->addToJavaScriptWindowObject("File", this, QScriptEngine::ScriptOwnership);

    //set the File object as a property of the FileSystem object
    QString fObject = "window.FileSystem.File = window.File; delete File;";
    this->Fbrowser->page()->currentFrame()->evaluateJavaScript(fObject);

    PluginInterface::jsReset();
}


bool FileSystemFile::rename(QString oldName, QString newName) {
    return QFile::rename(oldName, newName);
}


bool FileSystemFile::copy(QString fileName, QString newFileName) {
    return QFile::copy(fileName, newFileName);
}


QString FileSystemFile::decodeName(QByteArray localFileName) {
    return QFile::decodeName(localFileName);
}


QByteArray FileSystemFile::encodeName(QString fileName) {
    return QFile::encodeName(fileName);
}


bool FileSystemFile::exists(QString fileName) {
    return QFile::exists(fileName);
}


bool FileSystemFile::link(QString fileName, QString linkName) {
    return QFile::link(fileName, linkName);
}


bool FileSystemFile::remove(QString fileName) {
    return QFile::remove(fileName);
}

bool FileSystemFile::unlink(QString fileName) {
    return QFile::remove(fileName);
}


bool FileSystemFile::resize(QString filename, qint64 size) {
    return QFile::resize(filename, size);
}


QString FileSystemFile::symLinktarget(QString linkName) {
    return QFile::symLinkTarget(linkName);
}


QString FileSystemFile::readAll(QString fileName) {
    QFile file(fileName);
    return file.readAll();
}


QString FileSystemFile::read(QString fileName, qint64 length) {
    QFile file(fileName);
    return file.read(length);
}


qint64 FileSystemFile::write(QString fileName, QString data) {
    QFile file(fileName);
    return file.write(data.toAscii());
}


qint64 FileSystemFile::append(QString fileName, QString data) {
    QFile file(fileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Append)) {
        return 0;
    }

    QTextStream fs(&file);
    fs << data;

    file.close();

    return data.size();
}
