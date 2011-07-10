#include <QtGui/QApplication>
#include "browser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Browser *browser = new Browser;

    browser->show();

    return a.exec();
}
