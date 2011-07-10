#include "filesystem.h"

FileSystem::FileSystem(QObject *parent) :
    QObject(parent)
{
    this->file = new FileSystemFile(this);
    this->dir = new FileSystemDir(this);
}
