#ifndef WINDOW_H
#define WINDOW_H

#include <QObject>
#include <QWebView>
#include <QDebug>

class Window : public QObject
{
    Q_OBJECT
public:
    explicit Window(QObject *parent = 0);
    explicit Window(QWebView *window);

    void setWindow(QWebView *window);

private:
    QWebView *window;
signals:

public slots:
    void hide();

    void show();

    void close();

    bool isHidden();

    bool isVisible();

    //QSize size();

    void height(int height);

    int height();

    void width(int width);

    int width();

    void setSize(int width, int height);

    void setOpacity(double opacity);

    double opacity();

    void setTitle(QString text);

    QString title();

    void minimize();

    void maximize();

    void restore();

    void fullscreen();

    void setFocus();
};
#endif // WINDOW_H
