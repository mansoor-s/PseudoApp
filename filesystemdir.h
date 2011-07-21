#ifndef FILESYSTEMDIR_H
#define FILESYSTEMDIR_H

#include <QObject>
#include <QDir>
#include "plugininterface.h"
#include "browser.h"

class FileSystemDir : public PluginInterface
{
    Q_OBJECT
public:
    explicit FileSystemDir(QObject *parent = 0);
    explicit FileSystemDir(Browser *browser);

signals:

public slots:
    void jsReset();

    QString currentPath();
    void setCurrentPath(QString path);
    QString cleanPath(QString path);
    QString homePath();
    QString tempPath();
    bool isAbsolutePath(QString path);
    bool isRelativePath(QString path);
    bool match(QString exp, QString path);
    QString rootPath();
    QString separator();
    QString toNativeSeparators(QString path);
    bool isReadable(QString path);
    bool isRootPath(QString path);
    bool mkdir(QString name);
    bool mkpath(QString path);
    bool rename(QString oldName, QString newName);
    bool rmdir(QString name);
    bool rmpath(QString path);
    QString dirName(QString path);
    QString relativeFilePath(QString path);
    QString absoluteFilePath(QString filePath);
    QString absolutePath(QString path);
    bool exists(QString path);
};

#endif // FILESYSTEMDIR_H
