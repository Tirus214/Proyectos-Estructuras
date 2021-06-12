#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "TDA.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    //ya no
}



QString sumaTotal(ListaSimple *lista, NodoLista *temp)
{
    PilaSimple *pila = new PilaSimple();


    temp = lista->primerNodo;
    qDebug() << "\n\nOperaciones:";

    while(temp!=NULL)
    {

        if(QString::compare("+",temp->dato , Qt::CaseInsensitive)!=0 && QString::compare("-",temp->dato , Qt::CaseInsensitive)!=0
            && QString::compare("*",temp->dato, Qt::CaseInsensitive)!=0 && QString::compare("/",temp->dato , Qt::CaseInsensitive)!=0
            && QString::compare(")",temp->dato ,Qt::CaseInsensitive)!=0 &&  QString::compare("^",temp->dato , Qt::CaseInsensitive)!=0
            && QString::compare("@",temp->dato ,Qt::CaseInsensitive)!=0 &&  QString::compare("#",temp->dato , Qt::CaseInsensitive)!=0
            && QString::compare("(",temp->dato ,Qt::CaseInsensitive)!=0)
        {
            //si es un número
            pila->push(temp->dato);
        }
        else
        {
            if(QString::compare("+",temp->dato , Qt::CaseInsensitive)==0)
            {
                double p1 = pila->pop()->dato.toDouble();
                double p2 = pila->pop()->dato.toDouble();
                double resultado = p1+p2;
                qDebug() << p2<< "+" << p1 << "=" <<resultado;
                pila->push(QString::number(resultado));
            }
            if(QString::compare("*",temp->dato , Qt::CaseInsensitive)==0)
            {
                double p1 = pila->pop()->dato.toDouble();
                double p2 = pila->pop()->dato.toDouble();
                double resultado = p2*p1;
                qDebug() << p2<< "*" << p1 << "=" <<resultado;
                pila->push(QString::number(resultado));
            }
            if(QString::compare("-",temp->dato , Qt::CaseInsensitive)==0)
            {
                double p1 = pila->pop()->dato.toDouble();
                double p2 = pila->pop()->dato.toDouble();
                double resultado = p2-p1;
                qDebug() << p2<< "-" << p1 << "=" <<resultado;
                pila->push(QString::number(resultado));
            }
            if(QString::compare("/",temp->dato , Qt::CaseInsensitive)==0)
            {
                double p1 = pila->pop()->dato.toDouble();
                double p2 = pila->pop()->dato.toDouble();
                double resultado = p2/p1;
                qDebug() << p2<< "/" << p1 << "=" <<resultado;
                pila->push(QString::number(resultado));
            }
            if(QString::compare("^",temp->dato , Qt::CaseInsensitive)==0)
            {
                double p1 = pila->pop()->dato.toDouble();;
                double p2 = pila->pop()->dato.toDouble();
                double resultado = pow(p2,p1);
                qDebug() << p2<< "^" << p1 << "=" <<resultado;
                pila->push(QString::number(resultado));
            }
            if(QString::compare("#",temp->dato , Qt::CaseInsensitive)==0)
            {
                double p1 = pila->pop()->dato.toDouble();
                double p2 = pila->pop()->dato.toDouble();
                double resultado = pow(p1,1/p2);
                qDebug() <<"raiz" <<p2<<"de" << p1 << "=" <<resultado;
                pila->push(QString::number(resultado));
            }
            if(QString::compare("@",temp->dato , Qt::CaseInsensitive)==0)
            {
                double p1 = pila->pop()->dato.toDouble();
                double p2 = pila->pop()->dato.toDouble();
                double resultado = log(p1) / log(p2);
                qDebug() <<"logaritmo base" <<p2<< "de" << p1 << "=" <<resultado;
                pila->push(QString::number(resultado));
            }
        }
        temp = temp->siguiente;
    }
    delete(temp);
    qDebug() << "\n\n";
    return pila->pop()->dato;




}

ListaSimple *ponerOrden(QString expresion,int tamano,int tipoLista)
{
    NodoArbol *actual = new NodoArbol();
    NodoArbol *raiz = new NodoArbol();
    Pila *pila = new Pila();
    ListaSimple *lista1 = new ListaSimple();
    ListaSimple *lista2 = new ListaSimple();
    ListaSimple *lista3 = new ListaSimple();
    ;


    int cont = 0;
    for(int x = 0;x<tamano;x++)
    {
        if(cont == 0)
        {
            cont++;
            raiz = actual;
            pila->push(actual);
        }
        else
         if(QString::compare("(",expresion.at(x),Qt::CaseInsensitive)==0)
         {
            NodoArbol *nuevo = new NodoArbol();
            if(actual->izq == NULL)
                actual->izq = nuevo;
            else
                if(actual->der == NULL)
                    actual->der = nuevo;
                else
                    qDebug() << "(((ay caramba "<< expresion.at(x);
            actual = nuevo;
            pila->push(actual);
          }
                else
                    if(QString::compare("+",expresion.at(x) , Qt::CaseInsensitive)!=0 && QString::compare("-",expresion.at(x) , Qt::CaseInsensitive)!=0
                        && QString::compare("*",expresion.at(x),  Qt::CaseInsensitive)!=0 && QString::compare("/",expresion.at(x) , Qt::CaseInsensitive)!=0
                        && QString::compare(")",expresion.at(x), Qt::CaseInsensitive)!=0  && QString::compare("^",expresion.at(x) , Qt::CaseInsensitive)!=0
                        && QString::compare("#",expresion.at(x) , Qt::CaseInsensitive)!=0  && QString::compare("@",expresion.at(x) , Qt::CaseInsensitive)!=0  )
                    {
                        NodoArbol *nuevo = new NodoArbol();
                        nuevo->dato = expresion.at(x);

                            if(actual->izq == NULL)
                            {
                                qDebug() << "asignando a la izquierda" <<expresion.at(x);
                                actual->izq = nuevo;
                            }
                            else
                            {
                                if(actual->der == NULL)
                                {
                                    qDebug() << "asignando a la derecha" <<expresion.at(x);
                                    actual->der = nuevo;
                                }
                                else
                                    qDebug() << "ay caramba " <<expresion.at(x) << "Raiz: "<<actual->dato<< "izq: "<<actual->izq->dato << "der: "<<actual->der->dato;
                            }
                    }
                    else
                        if(QString::compare("+",expresion.at(x) , Qt::CaseInsensitive)==0 || QString::compare("-",expresion.at(x) , Qt::CaseInsensitive)==0
                            || QString::compare("*",expresion.at(x), Qt::CaseInsensitive)==0 || QString::compare("/",expresion.at(x) , Qt::CaseInsensitive)==0
                            || QString::compare("^",expresion.at(x) , Qt::CaseInsensitive)==0 || QString::compare("#",expresion.at(x) , Qt::CaseInsensitive)==0
                            || QString::compare("@",expresion.at(x) , Qt::CaseInsensitive)==0     )
                        {
                            if(actual->izq != NULL && actual->der != NULL)
                            {
                                NodoArbol *nuevo = new NodoArbol();
                                nuevo->dato = expresion.at(x);
                                nuevo->izq = raiz;
                                actual = nuevo;
                                raiz = nuevo;
                                pila->push(actual);
                            }
                            else
                                pila->getTope()->nodo->dato = expresion.at(x);

                        }


    }
    delete(pila);




        qDebug() << "\nInorden";
        actual->inorden(raiz);

        qDebug() << "\nPostorden";
        actual->postorden(raiz);

        qDebug() << "\nPreorden";
        actual->preorden(raiz);

        lista3 = actual->listapreorden(raiz,lista3);
        lista1 = actual->listainorden(raiz,lista1);
        lista2 = actual->listapostorden(raiz,lista2);


        if(tipoLista == 1)
            return lista1;
        if(tipoLista == 2)
            return lista2;
        return lista3;

}


bool esNum(QString num)
{
    if(QString::compare("+",num, Qt::CaseInsensitive)!=0 && QString::compare("-",num , Qt::CaseInsensitive)!=0
        && QString::compare("*",num,  Qt::CaseInsensitive)!=0 && QString::compare("/",num , Qt::CaseInsensitive)!=0
        && QString::compare(")",num, Qt::CaseInsensitive)!=0  && QString::compare("^",num , Qt::CaseInsensitive)!=0
        && QString::compare("#",num, Qt::CaseInsensitive)!=0  && QString::compare("@",num, Qt::CaseInsensitive)!=0)
        return true;
    else
        return false;
}


QString eliminarDobles(QString num)
{

    ListaSimple *lista = new ListaSimple();
    lista->add("");
    for(int x = 0; x< num.size();x++)
    {
        if(QString::compare(lista->ultimoNodo->dato,num.at(x),Qt::CaseInsensitive)!=0)
            lista->add(num.at(x));
    }
    qDebug () << "Antes" << num << "Despues" << lista->imprimir();
    return lista->imprimir();
}



void MainWindow::on_pushButton_clicked()
{
    ListaSimple *lista1 = new ListaSimple();
    ListaSimple *lista2 = new ListaSimple();
    ListaSimple *lista3 = new ListaSimple();
    NodoLista *temp = new NodoLista();

    if(QString::compare("",ui->lineEdit_2->text(),Qt::CaseInsensitive)==0 && QString::compare("",ui->lineEdit_3->text(),Qt::CaseInsensitive)==0)
    {
        //(4*(5+6)*6/2)
        //(4/(5/9)@(8*2)^4)
        //(6+(5*9)*(8+2)^(4#2)+1)

        int tamano=0;
        for(int x = 0; x<ui->lineEdit->text().size();x++)
            tamano++;

        lista1 = ponerOrden(ui->lineEdit->text(),tamano,1);//inorden
        lista2 = ponerOrden(ui->lineEdit->text(),tamano,2);//postorden
        lista3 = ponerOrden(ui->lineEdit->text(),tamano,3);//preorden

        ui->lineEdit_2->setText(lista2->imprimir());
        ui->lineEdit_3->setText(lista3->imprimir());
        ui->lineEdit_4->setText(sumaTotal(lista2,temp));


    }

    if(QString::compare("",ui->lineEdit->text(),Qt::CaseInsensitive)==0 && QString::compare("",ui->lineEdit_3->text(),Qt::CaseInsensitive)==0)
    {
        //convertirla a inorden
        // 256+^7-
        // 456+@6*2/
        // 459//82*@4^
        ListaSimple *lista1 = new ListaSimple();
        PilaSimple *pila = new PilaSimple();
        QString infija;
        for(int x = 0; x<ui->lineEdit_2->text().size();x++)
        {
            if(esNum(ui->lineEdit_2->text().at(x)))
            {
                //si es un numero
                pila->push(ui->lineEdit_2->text().at(x));
            }
            else
            {
                QString p1 = pila->pop()->dato;
                QString p2 = pila->pop()->dato;
                pila->push(p2);
                pila->push(p1);
                if(esNum(p1) && esNum(p2))
                {
                    QString nuevo;
                    nuevo.append("(");
                    nuevo.append(p2);
                    nuevo.append(ui->lineEdit_2->text().at(x));
                    nuevo.append(p1);
                    nuevo.append(")");
                    pila->pop();
                    pila->pop();
                    pila->push(nuevo);
                }

            }
        }


        ui->lineEdit->setText(eliminarDobles( pila->getTope()->dato));

        int tamano=0;
        for(int x = 0; x<ui->lineEdit->text().size();x++)
            tamano++;

        lista1 = ponerOrden(ui->lineEdit->text(),tamano,1);//inorden
        lista2 = ponerOrden(ui->lineEdit->text(),tamano,2);//postorden
        lista3 = ponerOrden(ui->lineEdit->text(),tamano,3);//preorden

        ui->lineEdit_3->setText(lista3->imprimir());

        ui->lineEdit_4->setText(sumaTotal(lista2,temp));


    }

    if(QString::compare("",ui->lineEdit->text(),Qt::CaseInsensitive)==0 && QString::compare("",ui->lineEdit_2->text(),Qt::CaseInsensitive)==0)
    {
        NodoArbol * actual = new NodoArbol();
        NodoArbol * raiz = new NodoArbol();
        Pila *pila = new Pila();

        actual->dato =ui->lineEdit_3->text().at(0);
        pila->push(actual);
        raiz = pila->getTope()->nodo;

        for(int x = 1; x<ui->lineEdit_3->text().size();x++)
        {
            NodoArbol * nuevo = new NodoArbol();
            nuevo->dato = ui->lineEdit_3->text().at(x);

            if(!esNum(ui->lineEdit_3->text().at(x)))
            {

                if(actual->izq !=NULL && actual->der !=NULL)
                {
                    bool libre = false;
                    while(!libre)
                    {
                            if(pila->getTope()->nodo->der!=NULL)
                                pila->pop();
                            else
                                libre = true;
                    }
                    actual = pila->getTope()->nodo;
                    actual->der = nuevo;
                    //pila->push(actual);
                }


                if(actual->izq == NULL)
                    actual->izq =nuevo;
                else
                    actual->der = nuevo;
                actual = nuevo;
                pila->push(actual);
            }
            else
            {
                //es num
                if(actual->izq !=NULL && actual->der !=NULL)
                {
                    bool libre = false;
                    while(!libre)
                    {
                            if(pila->getTope()->nodo->der!=NULL)
                                pila->pop();
                            else
                                libre = true;

                    }
                    actual = pila->getTope()->nodo;
                    actual->der = nuevo;
                    //pila->push(actual);
                }
                else
                    if(actual->izq == NULL)
                        actual->izq =nuevo;
                    else
                        actual->der = nuevo;
            }
        }

        ListaSimple *lista4 = new ListaSimple();
        lista4 =actual->listainorden(raiz,lista4);

        QString num;
        num.append("(");

        NodoLista *temp = new NodoLista();
        temp = lista4->primerNodo;
        while(temp !=NULL)
        {
            num.append(temp->dato);
            temp = temp->siguiente;
        }
        num.append(")");
        ui->lineEdit->setText(num);

        int tamano=0;
        for(int x = 0; x<ui->lineEdit->text().size();x++)
            tamano++;


        //ui->lineEdit->setText()
        lista1 = ponerOrden(ui->lineEdit->text(),tamano,1);//inorden
        lista2 = ponerOrden(ui->lineEdit->text(),tamano,2);//postorden
        lista3 = ponerOrden(ui->lineEdit->text(),tamano,3);//preorden

        ui->lineEdit_2->setText(lista2->imprimir());
        ui->lineEdit_4->setText(sumaTotal(lista2,temp));



    }

    delete(lista1);
    delete(lista2);
    delete(lista3);
    delete(temp);
    qDebug() << "FIN";
}




void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
}

