#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <QObject>
#include "filesystemdir.h"
#include "filesystemfile.h"


class FileSystem : public QObject
{
    Q_OBJECT
public:
    explicit FileSystem(QObject *parent = 0);
    FileSystemFile *file;
    FileSystemDir *dir;

signals:

public slots:



};

#endif // FILESYSTEM_H
