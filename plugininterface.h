#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QObject>
#include "browser.h"

class PluginInterface : public QObject
{
    Q_OBJECT
public:
    explicit PluginInterface(QObject *parent = 0);
    explicit PluginInterface(Browser *browser);

protected:
    void setPluginName(QString name);

private:
    Browser *Pbrowser;
    QString PpluginName;
signals:

public slots:
    virtual void jsReset();
};

#endif // PLUGININTERFACE_H
