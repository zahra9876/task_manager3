#include "mainwindow.h"
#include "main_show.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_Show w;
    w.show();
    return a.exec();
}
