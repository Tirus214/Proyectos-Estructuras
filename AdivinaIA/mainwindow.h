#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "juego.h"
#include "partida.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Juego* juego;
    Partida partida;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setJuego(Juego*);

private slots:

    void on_btnIniciar_clicked();
    void on_btnGuardar_clicked();
    void on_btnSalir_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
