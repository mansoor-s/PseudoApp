#ifndef WINDOW_H
#define WINDOW_H

#include <QObject>
#include <QWebView>
#include "plugininterface.h"

class Window : public PluginInterface
{
    Q_OBJECT
public:
    explicit Window(QObject *parent = 0);
    explicit Window(Browser *window);

    void setWindow(Browser *window);

private:
    Browser *window;
signals:

public slots:

    void jsReset();

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

    void opacity(double opacity);

    double opacity();

    void title(QString text);

    QString title();

    void minimize();

    void maximize();

    void restore();

    void fullscreen();

    void setFocus();
};
#endif // WINDOW_H
