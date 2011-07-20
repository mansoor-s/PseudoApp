#include <QtGui/QApplication>
#include "browser.h"
#include "filesystemfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Browser *browser = new Browser;

    FileSystemFile *file = new FileSystemFile(browser);

    browser->show();

    return a.exec();
}
