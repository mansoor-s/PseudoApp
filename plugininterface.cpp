#include "plugininterface.h"
#include <QDebug>

PluginInterface::PluginInterface(QObject *parent) :
    QObject(parent)
{
}

PluginInterface::PluginInterface(Browser *browser) {
    this->Pbrowser = browser;
}


void PluginInterface::setPluginName(QString name) {
    this->PpluginName = name;
}


void PluginInterface::jsReset() {
    //remove jsReset method from being available through JS
    //QString js = "delete window.FileSystem." + this->PpluginName + "." + "jsReset;";
    //QVariant results = this->Pbrowser->page()->currentFrame()->evaluateJavaScript(js);
    //qDebug() << "js " << results ;
}
