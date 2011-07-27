#include <QtGui/QApplication>
#include "browser.h"
#include "filesystemfile.h"
#include "filesystemdir.h"
#include "window.h"
#include "sqlitedriver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Browser *browser = new Browser;

    new Window(browser);
    new FileSystemFile(browser);
    new FileSystemDir(browser);
    new SQLiteDriver(browser);

    browser->show();

    return a.exec();
}
