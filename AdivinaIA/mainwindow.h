#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "juego.h"
#include "partida.h"
#include "final.h"
#include "mensaje.h"
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
    Final final;
    Mensaje mensaje;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //setea el juego
    void setJuego(Juego*);
    //llama a mensaje
    void mostrarMensaje();

private slots:

    void on_btnIniciar_clicked();
    void on_btnGuardar_clicked();
    void on_btnSalir_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
