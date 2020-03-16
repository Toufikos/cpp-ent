#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>

class MaFenetre : public QWidget
{
    Q_OBJECT
public:
    MaFenetre();

public slots:
    void changerLargeur(int largeur);

private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
};

#endif // MAFENETRE_H
