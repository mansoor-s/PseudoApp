#ifndef FILESYSTEMFILE_H
#define FILESYSTEMFILE_H

#include <QObject>
#include <QTextStream>
#include <QFile>

class FileSystemFile : public QObject
{
    Q_OBJECT
public:
    explicit FileSystemFile(QObject *parent = 0);

signals:

public slots:

    /*
      -------to implement------
    Permissions	permissions ( const QString & fileName )
    void	setDecodingFunction ( DecoderFn function )
    void	setEncodingFunction ( EncoderFn function )
    bool	setPermissions ( const QString & fileName, Permissions permissions )
    */
    bool rename(QString oldName, QString newName);

    bool copy(QString fileName, QString newFileName);

    QString decodeName(QByteArray localFileName);

    QByteArray encodeName(QString fileName);

    bool exists(QString fileName);

    bool link(QString fileName, QString linkName);

    bool remove(QString fileName);

    bool resize(QString filename, qint64 size);

    QString symLinktarget(QString linkName);

    QString readAll(QString fileName);

    QString read(QString fileName, qint64 length);

    qint64 write(QString fileName, QString data);

    qint64 append(QString fileName, QString data);

};

#endif // FILESYSTEMFILE_H
