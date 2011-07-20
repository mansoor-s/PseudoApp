#ifndef BROWSER_H
#define BROWSER_H

#include <iostream>
#include <QWebView>
#include <QUrl>
#include <QWebFrame>
//#include "window.h"
//#include "filesystemdir.h"
//#include "filesystemfile.h"

class Browser : public QWebView
{
    Q_OBJECT
public:
    explicit Browser(QWidget *parent = 0);

private:
    //QVector<PluginContainer(QString)> pluginsToAdd;

signals:

public slots:
    void jsReset();

};

#endif // BROWSER_H
