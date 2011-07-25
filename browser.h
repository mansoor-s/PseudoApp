#ifndef BROWSER_H
#define BROWSER_H

#include <iostream>
#include <QWebView>
#include <QUrl>
#include <QWebFrame>


class Browser : public QWebView
{
    Q_OBJECT
public:
    explicit Browser(QWidget *parent = 0);

signals:

public slots:
    void jsReset();
    void contextMenuEvent(QEvent *e);

};

#endif // BROWSER_H
