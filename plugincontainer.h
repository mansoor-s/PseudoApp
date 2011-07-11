#ifndef PLUGINCONTAINER_H
#define PLUGINCONTAINER_H

#include <QString>

template <class T>
class PluginContainer
{
public:
    PluginContainer();
    PluginContainer(QString name, T *plugin);

    void setPlugin(T *plugin);
    void setName(QString name);

    T* plugin();
    QString name();

private:
    QString Pname;
    T *Pplugin;
};

#endif // PLUGINCONTAINER_H
