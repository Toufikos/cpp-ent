#include "mainwindow.h"
#include "mafenetre.h"
#include "mafenetre2.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MaFenetre2 m2;
    m2.show();

   // MaFenetre m;
    //m.show();

    //MainWindow w;
    //w.show();
    return a.exec();
}
