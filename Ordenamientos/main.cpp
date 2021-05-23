#include "mainwindow.h"
#include "contenedor.h"
#include <QtWidgets/QMainWindow>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

//QT_CHARTS_USE_NAMESPACE

int grafica(int argc, char *argv[]);

int main(int argc, char *argv[])
{

    Contenedor* contenedor= new Contenedor();

    contenedor->generarNumeros();
    contenedor->imprimir();
    cout << endl << endl;
    //contenedor->ordMergesort();
    //contenedor->imprimir();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setContenedor(contenedor);
    return a.exec();
}


int grafica(int argc, char *argv[]){

    QApplication a(argc, argv);

    QBarSet *set0 = new QBarSet("Listas");

    *set0 << 0 << 1 << 2 << 3 << 4 << 5;

    // Add all sets of data to the chart as a whole
            // 1. Bar Chart
    QBarSeries *series = new QBarSeries();

            // 2. Stacked bar chart
            // QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
    series->append(set0);

            // Used to define the bar chart to display, title
            // legend,
    QChart *chart = new QChart();

            // Add the chart
    chart->addSeries(series);

            // Set title
    chart->setTitle("Duracion de algoritmos en milisegundos");

            // Define starting animation
            // NoAnimation, GridAxisAnimations, SeriesAnimations
    chart->setAnimationOptions(QChart::AllAnimations);

            // Holds the category titles
    QStringList categories;
    categories << "Intercambio" << "Seleccion" << "Insercion" << "Burbuja" << "Shell"
                << "Mergesort" << "Quicksort" << "Binsort" << "Radixsort";

            // Adds categories to the axes
    QBarCategoryAxis *axis = new QBarCategoryAxis();
            axis->append(categories);
    chart->createDefaultAxes();

            // 1. Bar chart
    chart->setAxisX(axis, series);

            // 2. Stacked Bar chart
            // chart->setAxisY(axis, series);

            // Define where the legend is displayed
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

            // Used to display the chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

            // Used to change the palette
    QPalette pal = qApp->palette();

            // Change the color around the chart widget and text
    pal.setColor(QPalette::Window, QRgb(0xffffff));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));

            // Apply palette changes to the application
    qApp->setPalette(pal);

    QMainWindow w;
    w.setCentralWidget(chartView);
    w.resize(800,600);
    w.show();
    return a.exec();
}
