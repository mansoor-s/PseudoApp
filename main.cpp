#include <QtGui/QApplication>
#include "browser.h"
#include "filesystemfile.h"
#include "filesystemdir.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Browser *browser = new Browser;

    FileSystemFile *file = new FileSystemFile(browser);
    FileSystemDir *dir = new FileSystemDir(browser);

    browser->show();

    return a.exec();
}
