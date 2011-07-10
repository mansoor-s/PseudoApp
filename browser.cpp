#include "browser.h"

Browser::Browser(QWidget *parent) :
    QWebView(parent)
{
    QUrl *url = new QUrl("http://mansoorsayed.com/PseudoApp App/index.html");
    this->setUrl(*url);

    connect(this->page()->currentFrame(), SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(js_cleared()));

    this->window = new Window(this);
    this->filesystemdir = new FileSystemDir;
    this->filesystemfile = new FileSystemFile;
}


void Browser::js_cleared() {
    this->page()->currentFrame()->evaluateJavaScript("window.FileSystem = {};");
    this->page()->currentFrame()->addToJavaScriptWindowObject("Window", this->window);
    this->page()->currentFrame()->addToJavaScriptWindowObject("window.FileSystem.Dir", this->filesystemdir);
    this->page()->currentFrame()->addToJavaScriptWindowObject("File", this->filesystemfile);

    QString cleanUp = "";
}
