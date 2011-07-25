#ifndef SQLITEDRIVER_H
#define SQLITEDRIVER_H

#include "dbdriverinterface.h"
#include "browser.h"

class SQLiteDriver : public DBDriverInterface
{
public:
    explicit SQLiteDriver(QObject *parent);
    explicit SQLiteDriver(Browser *browser);

public slots:
    void jsReset();
};

#endif // SQLITEDRIVER_H
