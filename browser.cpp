#include "browser.h"

Browser::Browser(QWidget *parent) : QWebView(parent) {
    QUrl *url = new QUrl("http://mansoorsayed.com/PseudoApp App/index.html");
    this->setUrl(*url);

    connect(this->page()->currentFrame(), SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(jsReset()));
}




void Browser::jsReset() {

}


void Browser::contextMenuEvent(QEvent *e) {

}
