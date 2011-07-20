#ifndef FILESYSTEMDIR_H
#define FILESYSTEMDIR_H

#include <QObject>
#include "plugininterface.h"

class FileSystemDir : public PluginInterface
{
    Q_OBJECT
public:
    explicit FileSystemDir(QObject *parent = 0);

signals:

public slots:

};

#endif // FILESYSTEMDIR_H
