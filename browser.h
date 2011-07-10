#ifndef BROWSER_H
#define BROWSER_H

#include <iostream>
#include <QWebView>
#include <QUrl>
#include <QWebFrame>
#include "window.h"
#include "filesystemdir.h"
#include "filesystemfile.h"

class Browser : public QWebView
{
    Q_OBJECT
public:
    Browser(QWidget *parent = 0);
    Window *window;
    FileSystemDir *filesystemdir;
    FileSystemFile *filesystemfile;

signals:

public slots:
    void js_cleared();

};

#endif // BROWSER_H
