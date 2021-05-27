#ifndef FINAL_H
#define FINAL_H
#include "juego.h"
#include <QDialog>

namespace Ui {
class Final;
}

class Final : public QDialog
{
    Q_OBJECT

public:
    Juego* juego;

    explicit Final(QWidget *parent = nullptr);
    ~Final();

    void setJuego(Juego*);

private:
    Ui::Final *ui;
};

#endif // FINAL_H
