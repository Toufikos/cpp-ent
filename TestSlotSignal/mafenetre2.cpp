#include "mafenetre2.h"

MaFenetre2::MaFenetre2() : QWidget()
{
    setFixedSize(300, 400);

    sld = new QSlider(Qt::Horizontal, this);
    sld->setRange(200, 600);
    sld->setGeometry(10, 60, 150, 20);

    sld2 = new QSlider(Qt::Vertical, this);
    sld2->setRange(200, 600);
    sld2->setGeometry(40, 60, 150, 20);

    QObject::connect(sld, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
    QObject::connect(sld2, SIGNAL(valueChanged(int)), this, SLOT(changerLongueur(int)));


}

void MaFenetre2::changerLargeur(int largeur){

    setFixedSize(largeur, 100);
}

void MaFenetre2::changerLongueur(int longueur){

    setFixedSize(100, longueur);
}




