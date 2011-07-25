#ifndef DBDRIVERINTERFACE_H
#define DBDRIVERINTERFACE_H

#include <QObject>
#include "browser.h"

class DBDriverInterface : public QObject
{
    Q_OBJECT
public:
    explicit DBDriverInterface(QObject *parent = 0);
    explicit DBDriverInterface(Browser *browser);

signals:

public slots:
    virtual void jsReset();
};

#endif // DBDRIVERINTERFACE_H
