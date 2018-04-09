#include "mainwindow.h"
#include <QApplication>

QString styleSheet =
        "background-color: #444;"
        "color: #CCC;"
        "";

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //w.setStyleSheet(styleSheet);

    return a.exec();
}
