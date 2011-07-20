#include "browser.h"

Browser::Browser(QWidget *parent) :
    QWebView(parent)
{
    QUrl *url = new QUrl("http://mansoorsayed.com/PseudoApp App/index.html");
    this->setUrl(*url);

    connect(this->page()->currentFrame(), SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(jsReset()));

    //PluginContainer<QString, Window> window("Window", new Window(this));

    //QHash<QString, Window*> window;
   // window.insert("Window", new Window(this));


   // PluginContainer fsDir("FileSystemDir", new FileSystemDir);
    //PluginContainer fsFile("FileSystemFile", new FileSystemFile);

    //QVector<PluginContainer<QString> > test;

    //this->pluginsToAdd.insert()
}




void Browser::jsReset() {
 /*   this->page()->currentFrame()->evaluateJavaScript("window.FileSystem = {};");
    this->page()->currentFrame()->addToJavaScriptWindowObject("Window", this->window);
    this->page()->currentFrame()->addToJavaScriptWindowObject("window.FileSystem.Dir", this->filesystemdir);
    this->page()->currentFrame()->addToJavaScriptWindowObject("File", this->filesystemfile);

    QString cleanUp = "";*/
}

