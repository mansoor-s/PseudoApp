#ifndef BROWSER_H
#define BROWSER_H

#include <iostream>
#include <QWebView>
#include <QUrl>
#include <QWebFrame>
#include "window.h"
#include "filesystem.h"

class Browser : public QWebView
{
    Q_OBJECT
public:
    Browser(QWidget *parent = 0);
    Window *window;
    FileSystem *filesystem;

signals:

public slots:
    void js_cleared();

};

#endif // BROWSER_H
