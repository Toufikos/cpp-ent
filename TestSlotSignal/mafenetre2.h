#ifndef MAFENETRE2_H
#define MAFENETRE2_H

#include <QSlider>
#include <QWidget>


class MaFenetre2 : public QWidget
{
    // POur faire un slot : ne pas oublier l'exécution de qmake sinon pleins d'erreurs
            // qmake (dans l'onglet Compiler)
    Q_OBJECT
public:
    MaFenetre2();

public slots:
    void changerLargeur(int);
    void changerLongueur(int);

signals:
    void agrandissementMax();

private:
    QSlider *sld, *sld2;

};

#endif // MAFENETRE2_H
