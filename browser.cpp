#include "browser.h"

Browser::Browser(QWidget *parent) :
    QWebView(parent)
{
    QUrl *url = new QUrl("http://mansoorsayed.com/PseudoApp App/index.html");
    this->setUrl(*url);

    connect(this->page()->currentFrame(), SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(js_cleared()));

    this->window = new Window(this);
}


void Browser::js_cleared() {
    this->page()->currentFrame()->addToJavaScriptWindowObject("Window", this->window);
}
