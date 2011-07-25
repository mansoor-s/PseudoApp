#include "filesystemdir.h"

FileSystemDir::FileSystemDir(QObject *parent) : PluginInterface(parent) {
}


FileSystemDir::FileSystemDir(Browser *browser) : PluginInterface(browser) {
    this->Dbrowser = browser;
    this->setPluginName("Dir");
    this->connect(browser->page()->currentFrame(), SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(jsReset()));
}




void FileSystemDir::jsReset() {
    // Create the FileSystem object if it does not allready exist
    QString fsObject = "if (!window.FileSystem) window.FileSystem = {};";
    this->Dbrowser->page()->currentFrame()->evaluateJavaScript(fsObject);

    //Add File object to the window object as we can ONLY add it there
    this->Dbrowser->page()->currentFrame()->addToJavaScriptWindowObject("Dir", this, QScriptEngine::ScriptOwnership);

    //set the File object as a property of the FileSystem object
   // QString fObject = "window.FileSystem.Dir = window.Dir; delete window.Dir;";
    //this->Dbrowser->page()->currentFrame()->evaluateJavaScript(fObject);

    PluginInterface::jsReset();
}



QString FileSystemDir::currentPath() {
    return QDir::currentPath();
}



void FileSystemDir::setCurrentPath(QString path) {
    QDir::setCurrent(path);
}



QString FileSystemDir::cleanPath(QString path) {
    return QDir::cleanPath(path);
}



QString FileSystemDir::homePath() {
    return QDir::homePath();
}



QString FileSystemDir::tempPath() {
    return QDir::tempPath();
}



bool FileSystemDir::isAbsolutePath(QString path) {
    return QDir::isAbsolutePath(path);
}



bool FileSystemDir::isRelativePath(QString path) {
    return QDir::isRelativePath(path);
}



bool FileSystemDir::match(QString exp, QString path) {
    return QDir::match(exp, path);
}



QString FileSystemDir::rootPath() {
    return QDir::rootPath();
}


QString FileSystemDir::separator() {
    return QDir::separator();
}



QString FileSystemDir::toNativeSeparators(QString path) {
    return QDir::toNativeSeparators(path);
}



bool FileSystemDir::isReadable(QString path) {
    QDir dir(path);
    return dir.isReadable();
}




bool FileSystemDir::isRootPath(QString path) {
    QDir dir(path);
    return dir.isRoot();
}




bool FileSystemDir::mkdir(QString name) {
    QDir dir(QDir::current());
    return dir.mkdir(name);
}



bool FileSystemDir::mkpath(QString path) {
    QDir dir(QDir::current());
    return dir.mkpath(path);
}



bool FileSystemDir::rename(QString oldName, QString newName) {
    QDir dir(QDir::current());
    return dir.rename(oldName, newName);
}



bool FileSystemDir::rmdir(QString name) {
    QDir dir(QDir::current());
    return dir.rmdir(name);
}



bool FileSystemDir::rmpath(QString path) {
    QDir dir(QDir::current());
    return dir.rmpath(path);
}



QString FileSystemDir::dirName(QString path) {
    QDir dir(path);
    return dir.dirName();
}



QString FileSystemDir::relativeFilePath(QString path) {
    QDir dir(QDir::current());
    return dir.relativeFilePath(path);
}



QString FileSystemDir::absoluteFilePath(QString filePath) {
    QDir dir(QDir::current());
    return dir.absoluteFilePath(filePath);
}


QString FileSystemDir::absolutePath(QString path) {
    QDir dir(path);
    return dir.absolutePath();
}



bool FileSystemDir::exists(QString path) {
    QDir dir(path);
    return dir.exists();
}
