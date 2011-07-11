#include "plugincontainer.h"

PluginContainer::PluginContainer()
{
}


PluginContainer::PluginContainer(QString name, T *plugin)
{
    this->name = name;
    this->plugin = plugin;
}


void PluginContainer::setPlugin(T *plugin)
{
    this->Pplugin = plugin;
}


void PluginContainer::setName(QString name) {
    this->Pname = name;
}


QString PluginContainer::name() {
    return this->Pname;
}


T* PluginContainer::plugin() {
    return this->Pplugin;
}
