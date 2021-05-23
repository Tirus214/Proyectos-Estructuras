#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contenedor.h"
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    Contenedor* contenedor;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setContenedor(Contenedor* nuevo);
    void imprimirElementos();
    void limpiarPantalla();
    void imprimir(Nodo* primero, QTextEdit* txtArea);

private slots:

    void on_btnIntercambio_clicked();
    void on_btnInsercion_clicked();
    void on_btnSeleccion_clicked();
    void on_btnBurbuja_clicked();
    void on_btnShell_clicked();
    void on_btnMergesort_clicked();
    void on_btnQuicksort_clicked();
    void on_btnBinsort_clicked();
    void on_btnRadixsort_clicked();
    void on_btnDesordenar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
