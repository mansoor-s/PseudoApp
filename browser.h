#ifndef BROWSER_H
#define BROWSER_H

#include <iostream>
#include <QWebView>
#include <QUrl>
#include <QWebFrame>
#include "plugincontainer.h"
#include "window.h"
#include "filesystemdir.h"
#include "filesystemfile.h"

class Browser : public QWebView
{
    Q_OBJECT
public:
    Browser(QWidget *parent = 0);

private:
    QVector<PluginContainer> pluginsToAdd;

signals:

public slots:
    void js_cleared();

};

#endif // BROWSER_H
