#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Listas.h"

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


void MainWindow::on_Boton1_clicked()
{
    ui->lineEdit->setText("Hola");


    qDebug () << "exito";
}

void MainWindow::on_lineEdit_returnPressed()
{

    //ui->lineEdit_2->setText("Editando");
}

//____________Funciones enteras
//
QString decimalAOctal2(ListaSimple *lista, Nodo *temp)
{
    //convertir toda la lista a un solo numero
    QString num;
    temp = lista->primerNodo;
    while(temp!=NULL)
    {
        num.append(temp->num);
        temp = temp->siguiente;
    }
    delete(temp);

    int rem, i = 1, numeroOctal = 0;
    int decimal = num.toInt();

    while( decimal != 0 )
    {
        rem = decimal % 8;
        decimal /= 8;
        numeroOctal += rem * i;
        i *= 10;
    }
    QString nuevo = QString::number(numeroOctal);
    return nuevo;
}

QString decimalABinario2(ListaSimple *lista, Nodo *temp)
{

    QString num;
    temp = lista->primerNodo;
    while(temp!=NULL)
    {
        num.append(temp->num);
        temp = temp->siguiente;
    }
    delete(temp);
    QString nuevo;
    int decimal = num.toInt();
    while (decimal != 0)
    {
        nuevo += ( decimal % 2 == 0 ? "0" : "1" );
        decimal /= 2;
    }
    std::reverse(nuevo.begin(), nuevo.end());
    return nuevo;
}

QString decimalAHexadecimal2(ListaSimple *lista, Nodo *temp)
{
    QString num;
    temp = lista->primerNodo;
    while(temp!=NULL)
    {
        num.append(temp->num);
        temp = temp->siguiente;
    }
    delete(temp);
    int decimal = num.toInt();
    int r;
    QString hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(decimal>0)
    {
        r = decimal % 16;
        hexdec_num = hex[r] + hexdec_num;
        decimal = decimal/16;
    }
    return hexdec_num;
}

QString decimalAAscii2(ListaSimple *lista, Nodo *temp)
{
    QString num;
    temp = lista->primerNodo;
    while(temp!=NULL)
    {
        num.append(temp->num);
        temp = temp->siguiente;
    }
    delete(temp);
    int decimal = num.toInt();
     QString nuevo;
     if(decimal == 7 || decimal == 8 || decimal == 9 || decimal == 10 || decimal == 11 || decimal == 12 || decimal == 13 || decimal == 14 || decimal == 15 || decimal == 17
             || decimal == 26 || decimal == 27 || decimal == 32 || decimal > 254 )
        return "";
    else
    {
         char a = decimal;
         nuevo.append(a);
         return nuevo;
    }
}

QString octalADecimal2(ListaSimple *lista, Nodo *temp)
{
    QString nuevo;
    temp = lista->ultimoNodo;

    int decimal = 0, i = 0, rem;

    while (temp != NULL)
    {
        int num = temp->num.toUInt();
        rem = num % 10;
        temp = temp->anterior;
        decimal += rem * pow(8, i);
        ++i;
    }
    nuevo = QString::number(decimal);
    return nuevo;
}

QString binarioADecimal2(ListaSimple *lista, Nodo *temp)
{
    QString nuevo;
    unsigned long long decimal = 0;
    temp = lista->ultimoNodo;
    int i =0;
    while(temp != NULL)
    {
        int num = temp->num.toUInt();
        decimal += num * pow(2,i);
        temp = temp->anterior;
        i++;
    }
    nuevo = QString::number(decimal);
    return nuevo;
}

QString hexadecimalADecimal2(ListaSimple *lista, Nodo *temp)
{
    QString nuevo;
    unsigned long long decimal = 0;
    temp = lista->ultimoNodo;
    int i =0;
    while(temp != NULL)
    {
        int num;
        if(QString::compare(temp->num, "A", Qt::CaseInsensitive)==0)
            num = 10;
        else
            if(QString::compare(temp->num, "B", Qt::CaseInsensitive)==0)
                num = 11;
            else
                if(QString::compare(temp->num, "C", Qt::CaseInsensitive)==0)
                    num = 12;
                else
                    if(QString::compare(temp->num, "D", Qt::CaseInsensitive)==0)
                        num = 13;
                    else
                        if(QString::compare(temp->num, "E", Qt::CaseInsensitive)==0)
                            num = 14;
                        else
                            if(QString::compare(temp->num, "F", Qt::CaseInsensitive)==0)
                                num = 15;
                            else
                                num = temp->num.toUInt();
        decimal += num * pow(16,i);
        temp = temp->anterior;
        i++;
    }
    nuevo = QString::number(decimal);
    return nuevo;
}

QString asciiADecimal2(ListaSimple *lista, Nodo *temp)
{

    QString num;
    temp = lista->primerNodo;
    while(temp!=NULL)
    {
        num.append(temp->num);
        temp = temp->siguiente;
    }
    std::string cadenaStd = num.toStdString();
    char c = cadenaStd[0];
    int decimal = c;
    QString nuevo = QString::number(decimal);
    return nuevo;
}


//____________Funciones originales
QString decimalABinario(QString num)
{


    QString nuevo;
    int decimal = num.toInt();
    while (decimal != 0)
    {
        nuevo += ( decimal % 2 == 0 ? "0" : "1" );
        decimal /= 2;
    }
    std::reverse(nuevo.begin(), nuevo.end());
    return nuevo;
}

QString decimalAHexadecimal(QString num)
{
    int r;
    int decimal = num.toInt();
    QString hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(decimal>0)
    {
        r = decimal % 16;
        hexdec_num = hex[r] + hexdec_num;
        decimal = decimal/16;
    }
    return hexdec_num;
}

QString decimalAAscii(QString num)
{
     int decimal = num.toInt();
     QString nuevo;
     if(decimal == 7 || decimal == 8 || decimal == 9 || decimal == 10 || decimal == 11 || decimal == 12 || decimal == 13 || decimal == 14 || decimal == 15 || decimal == 17
             || decimal == 26 || decimal == 27 || decimal == 32 || decimal > 254 )
        return "";
    else
    {
         char a = decimal;
         nuevo.append(a);
         return nuevo;
    }
}

QString octalADecimal(QString num)
{
    QString nuevo;
    int octal = num.toInt();
    int decimal = 0, i = 0, rem;
    while (octal != 0)
    {
        rem = octal % 10;
        octal /= 10;
        decimal += rem * pow(8, i);
        ++i;
    }
    nuevo = QString::number(decimal);

    return nuevo;
}

QString binarioADecimal(QString num)
{
    QString nuevo;
    int longitud = num.size();
    unsigned long long decimal = 0;
    int multiplicador = 1;
    QChar caracterActual;

    for (int i = longitud - 1; i >= 0; i--)
    {
        caracterActual = num[i];
        if (caracterActual == '1')
        {
          decimal += multiplicador;
        }
        multiplicador = multiplicador * 2;
    }
    nuevo = QString::number(decimal);

//______________



  return nuevo;
}

QString asciiADecimal(QString num)
{
    std::string cadenaStd = num.toStdString();
    char c = cadenaStd[0];
    int decimal = c;
    QString nuevo = QString::number(decimal);
    qDebug () << "Tenemos: " << nuevo;
    return nuevo;
}

QString hexadecimalADecimal(QString num)
{
    //
    std::string hex = num.toStdString();
    unsigned long result = 0;
    for (int i=0; i<hex.length(); i++)
    {
        if (hex[i]>=48 && hex[i]<=57)
            result += (hex[i]-48)*pow(16,hex.length()-i-1);
        else
            if (hex[i]>=65 && hex[i]<=70)
                result += (hex[i]-55)*pow(16,hex.length( )-i-1);
            else
                if (hex[i]>=97 && hex[i]<=102)
                    result += (hex[i]-87)*pow(16,hex.length()-i-1);

    }
        QString nuevo = QString::number(result);
        return nuevo;

}


//____________Funciones con decimales

ListaSimple decimalpor2(ListaSimple *lista1,Nodo *temp,ListaSimple *lista2,unsigned long long control)
{
    temp = lista1->ultimoNodo;
    bool carry = false;
    int num;
    while(temp!= NULL)
    {
        //qDebug () << "aaaaaa";
        num = temp->num.toUInt();
        num = num*2;
        if(carry)
            num = num+1;
        if(num>9)
        {
            num = num-10;
            carry = true;
        }
        else
            carry = false;
        temp->num = QString::number(num);
        temp = temp->anterior;
    }

    if(carry)
        lista2->add("1");
    else
        lista2->add("0");

    //lista2->imprimir();
    control++;

    if(control<9000)
        decimalpor2(lista1,temp,lista2,control);
    return *lista2;

}
QString decimalABinarioPunto(ListaSimple *lista, Nodo *temp,ListaSimple *lista2,ListaSimple *lista3)
{

    *lista3 = decimalpor2(lista,temp,lista2,0);
    temp = lista3->primerNodo;
    QString num;
    while(temp!=NULL)
    {
        num.append(temp->num);
        temp = temp->siguiente;
    }
    return num;
}

ListaSimple decimalpor8(ListaSimple *lista1,Nodo *temp,ListaSimple *lista2,unsigned long long control)
{
    temp = lista1->ultimoNodo;
    int carry = 0;
    bool isCarry=false;
    int num;
    while(temp!= NULL)
    {
        num = temp->num.toUInt();
        num = num*8;
        if(isCarry)
            num = num+carry;
        if(num>9)
        {
            carry = num/10;
            num = num %10;
            isCarry = true;
        }
        else
            isCarry = false;
        temp->num = QString::number(num);
        temp = temp->anterior;
    }

    if(isCarry)
        lista2->add(QString::number(carry));
    else
        lista2->add("0");

    //lista2->imprimir();
    control++;

    if(control<3000)
        decimalpor8(lista1,temp,lista2,control);
    return *lista2;
}
QString decimalAOctalPunto(ListaSimple *lista, Nodo *temp,ListaSimple *lista2,ListaSimple *lista3)
{
    *lista3 = decimalpor8(lista,temp,lista2,0);
    temp = lista3->primerNodo;
    QString num;
    while(temp!=NULL)
    {
        num.append(temp->num);
        temp = temp->siguiente;
    }
    return num;
}

ListaSimple decimalpor16(ListaSimple *lista1,Nodo *temp,ListaSimple *lista2,unsigned long long control)
{
    temp = lista1->ultimoNodo;
    int carry = 0;
    bool isCarry=false;
    int num;
    while(temp!= NULL)
    {
        //qDebug () << "aaaaaa";
        num = temp->num.toUInt();
        num = num*16;
        if(isCarry)
            num = num+carry;
        if(num>9)
        {
            carry = num/10;
            num = num %10;
            isCarry = true;
        }
        else
            isCarry = false;
        temp->num = QString::number(num);
        temp = temp->anterior;
    }

    if(isCarry)
    {
        if(carry == 10)
            lista2->add("A");
        else
            if(carry == 11)
                lista2->add("B");
            else
                if(carry == 12)
                    lista2->add("C");
                else
                    if(carry == 13)
                        lista2->add("D");
                    else
                        if(carry == 14)
                            lista2->add("E");
                        else
                            if(carry == 15)
                                lista2->add("F");
                            else
                                lista2->add(QString::number(carry));
    }
    else
        lista2->add("0");

    //lista2->imprimir();
    control++;

    if(control<1000)
        decimalpor16(lista1,temp,lista2,control);
    return *lista2;
}
QString decimalAHexadecimalPunto(ListaSimple *lista, Nodo *temp,ListaSimple *lista2,ListaSimple *lista3)
{
    *lista3 = decimalpor16(lista,temp,lista2,0);
    temp = lista3->primerNodo;
    QString num;
    while(temp!=NULL)
    {
        num.append(temp->num);
        temp = temp->siguiente;
    }
    return num;
}

QString octalToDecimal(ListaSimple *lista,Nodo *temp)
{

    temp = lista->primerNodo;
    double cuadrado=8;
    double total=0;
    while(temp!=NULL)
    {
        if(QString::compare(temp->num, "0", Qt::CaseInsensitive)!=0)
            total = total + (temp->num.toInt()* 1/cuadrado);

        cuadrado= cuadrado*8;
        temp = temp->siguiente;
    }

    QString nuevo = QString::number(total);
    std::reverse(nuevo.begin(), nuevo.end());
    nuevo.chop(2);
    std::reverse(nuevo.begin(), nuevo.end());
    return nuevo;

}

QString binaryToDecimal(ListaSimple *lista,Nodo *temp)
{

    temp = lista->primerNodo;
    double cuadrado=2;
    double total=0;
    while(temp!=NULL)
    {
        if(QString::compare(temp->num, "0", Qt::CaseInsensitive)!=0)
            total = total + (1/cuadrado);

        cuadrado= cuadrado*2;
        temp = temp->siguiente;
    }

    QString nuevo = QString::number(total);
    std::reverse(nuevo.begin(), nuevo.end());
    nuevo.chop(2);
    std::reverse(nuevo.begin(), nuevo.end());
    return nuevo;

}

QString hexaToDecimal(ListaSimple *lista,Nodo *temp)
{

    temp = lista->primerNodo;
    double cuadrado=16;
    double total=0;
    while(temp!=NULL)
    {
        if(QString::compare(temp->num, "0", Qt::CaseInsensitive)!=0)
        {
            if(QString::compare(temp->num, "A", Qt::CaseInsensitive)==0)
                total = total + (10*1/cuadrado);
            else
                if(QString::compare(temp->num, "B", Qt::CaseInsensitive)==0)
                    total = total + (11*1/cuadrado);
                else
                    if(QString::compare(temp->num, "C", Qt::CaseInsensitive)==0)
                        total = total + (12*1/cuadrado);
                    else
                        if(QString::compare(temp->num, "D", Qt::CaseInsensitive)==0)
                            total = total + (13*1/cuadrado);
                        else
                            if(QString::compare(temp->num, "E", Qt::CaseInsensitive)==0)
                                total = total + (14*1/cuadrado);
                            else
                                if(QString::compare(temp->num, "F", Qt::CaseInsensitive)==0)
                                    total = total + (15*1/cuadrado);
                                else
                                    total = total + (temp->num.toInt()*1/cuadrado);
        }
        cuadrado= cuadrado*16;
        temp = temp->siguiente;
    }

    QString nuevo = QString::number(total);
    std::reverse(nuevo.begin(), nuevo.end());
    nuevo.chop(2);
    std::reverse(nuevo.begin(), nuevo.end());
    return nuevo;

}



//LineEdits
void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

    if(arg1.size()!=0)
    {
        if(!arg1.endsWith("0") && !arg1.endsWith("1") && !arg1.endsWith("2") && !arg1.endsWith("3") && !arg1.endsWith("4") && !arg1.endsWith("5") && !arg1.endsWith("6")
                && !arg1.endsWith("7") && !arg1.endsWith("8") && !arg1.endsWith("9"))
        {
            ui->label_8->setText("Debe usar solo numeros");
            ui->lineEdit->setText(arg1.chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();
            Nodo *temp = new Nodo();
            for(int x = 0; x< arg1.size();x++)
                lista->add(arg1.at(x));


            ui->lineEdit_3->setText(decimalABinario2(lista,temp));
            ui->lineEdit_2->setText(decimalAOctal2(lista,temp));
            ui->lineEdit_4->setText(decimalAHexadecimal2(lista,temp));
            ui->lineEdit_5->setText(decimalAAscii2(lista,temp));
            delete(lista);
            delete(temp);
        }
    }
    else
    {
         ui->lineEdit_3->setText("");
         ui->lineEdit_2->setText("");
         ui->lineEdit_4->setText("");
    }
}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{

    if(arg1.size()!=0)
    {
        if(!arg1.endsWith("0") && !arg1.endsWith("1") && !arg1.endsWith("2") && !arg1.endsWith("3") && !arg1.endsWith("4") && !arg1.endsWith("5") && !arg1.endsWith("6")
                && !arg1.endsWith("7"))
        {
            qDebug () << "Caracter no valido";
            ui->label_8->setText("Debe usar solo numeros \ndel 0 al 7");
            ui->lineEdit_2->setText(arg1.chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();
            Nodo *temp = new Nodo();
            for(int x = 0; x< arg1.size();x++)
                lista->add(arg1.at(x));
            ui->lineEdit->setText(octalADecimal2(lista,temp));
            delete(lista);
            delete(temp);
        }
    }
    else
    {
         ui->lineEdit_3->setText("");
         ui->lineEdit->setText("");
         ui->lineEdit_4->setText("");
    }

}

void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    if(arg1.size()!=0)
    {
        if(!arg1.endsWith("0") && !arg1.endsWith("1"))
        {
            qDebug () << "Caracter no valido";
            ui->label_8->setText("Debe usar solo el 1 o el 0");
            ui->lineEdit_3->setText(arg1.chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();
            Nodo *temp = new Nodo();
            for(int x = 0; x< arg1.size();x++)
                lista->add(arg1.at(x));
            ui->lineEdit->setText(binarioADecimal2(lista,temp));
            delete(lista);
            delete(temp);
        }
    }
    else
    {
         ui->lineEdit_2->setText("");
         ui->lineEdit->setText("");
         ui->lineEdit_4->setText("");
    }

}

void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    if(arg1.size()!=0)
    {
        if(false)
        {
            qDebug () << "Caracter no valido";
            ui->label_8->setText("Debe usar solo el 1 o el 0");
            ui->lineEdit_3->setText(arg1.chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();
            Nodo *temp = new Nodo();
            for(int x = 0; x< arg1.size();x++)
                lista->add(arg1.at(x));
            ui->lineEdit->setText(hexadecimalADecimal2(lista,temp));
            delete(lista);
            delete(temp);
        }
    }
    else
    {
         ui->lineEdit_2->setText("");
         ui->lineEdit->setText("");
         ui->lineEdit_3->setText("");
    }
}

void MainWindow::on_lineEdit_5_textChanged(const QString &arg1)
{
    std::string cadenaStd = arg1.toStdString();
    char c = cadenaStd[0];

    if(c > 32 && c < 255)
    {
        ListaSimple *lista = new ListaSimple();
        Nodo *temp = new Nodo();
        for(int x = 0; x< arg1.size();x++)
            lista->add(arg1.at(x));
        ui->lineEdit->setText(asciiADecimal2(lista,temp));
        delete(lista);
        delete(temp);
    }
}

void MainWindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    if(arg1.size()!=0)
    {
        if(!arg1.endsWith("0") && !arg1.endsWith("1") && !arg1.endsWith("2") && !arg1.endsWith("3") && !arg1.endsWith("4") && !arg1.endsWith("5") && !arg1.endsWith("6")
                && !arg1.endsWith("7") && !arg1.endsWith("8") && !arg1.endsWith("9"))
        {
            ui->label_8->setText("Debe usar solo numeros");
            ui->lineEdit_6->setText(arg1.chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();//el numero orignal del lineEdit
            ListaSimple *lista2 = new ListaSimple();//lista de 1 o 0
            ListaSimple *lista3 = new ListaSimple();//recibe a lista 3 finalizada
            Nodo *temp = new Nodo();
            for(int x = 0; x< arg1.size();x++)
                lista->add(arg1.at(x));

            ui->lineEdit_7->setText(decimalAOctalPunto(lista,temp,lista2,lista3));
            lista2->primerNodo = NULL;
            lista3->primerNodo = NULL;
            ui->lineEdit_8->setText(decimalABinarioPunto(lista,temp,lista2,lista3));
            lista2->primerNodo = NULL;
            lista3->primerNodo = NULL;
            ui->lineEdit_9->setText(decimalAHexadecimalPunto(lista,temp,lista2,lista3));

            delete(lista);
            delete(temp);
            delete(lista2);
            delete(lista3);
        }
    }
    else
    {
         ui->lineEdit_7->setText("");
         ui->lineEdit_8->setText("");
         ui->lineEdit_9->setText("");
    }
}


void MainWindow::on_lineEdit_8_textChanged(const QString &arg1)
{/*
    if(arg1.size()!=0)
    {
        if(!arg1.endsWith("0") && !arg1.endsWith("1"))
        {
            ui->label_8->setText("Debe usar solo 1 ó 0");
            ui->lineEdit_8->setText(arg1.chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();//el numero orignal del lineEdit

            Nodo *temp = new Nodo();
            for(int x = 0; x< arg1.size();x++)
                lista->add(arg1.at(x));

            ui->lineEdit_6->setText( binaryToDecimal(lista,temp));
            qDebug () << binaryToDecimal(lista,temp);

            delete(lista);
            delete(temp);

        }
    }
    else
    {
         ui->lineEdit_7->setText("");
         ui->lineEdit_9->setText("");
    }*/
}


void MainWindow::on_pushButton_clicked()
{

    if(ui->lineEdit_8->text().size()!=0)
    {
        if(!ui->lineEdit_8->text().endsWith("0") && !ui->lineEdit_8->text().endsWith("1"))
        {
            ui->label_8->setText("Debe usar solo 1 ó 0");
            //ui->lineEdit_8->setText(ui->lineEdit_8->text().chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();//el numero orignal del lineEdit

            Nodo *temp = new Nodo();
            for(int x = 0; x< ui->lineEdit_8->text().size();x++)
                lista->add(ui->lineEdit_8->text().at(x));

            ui->lineEdit_6->setText( binaryToDecimal(lista,temp));

            delete(lista);
            delete(temp);

        }
    }
    else
    {    qDebug () << "ups";
         ui->lineEdit_7->setText("");
         ui->lineEdit_9->setText("");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_7->setText("");
    ui->lineEdit_8->setText("");
}


void MainWindow::on_pushButton_3_clicked()
{
    if(ui->lineEdit_7->text().size()!=0)
    {
        if(ui->lineEdit_7->text().contains("9") || ui->lineEdit_7->text().contains("8"))
        {
            ui->label_7->setText("Debe usar solo numeros del 0 al 7");
            //ui->lineEdit_8->setText(ui->lineEdit_8->text().chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();//el numero orignal del lineEdit

            Nodo *temp = new Nodo();
            for(int x = 0; x< ui->lineEdit_7->text().size();x++)
                lista->add(ui->lineEdit_7->text().at(x));

            ui->lineEdit_6->setText( octalToDecimal(lista,temp));

            delete(lista);
            delete(temp);

        }
    }
    else
    {    qDebug () << "ups";
         ui->lineEdit_8->setText("");
         ui->lineEdit_9->setText("");
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if(ui->lineEdit_9->text().size()!=0)
    {
        if(ui->lineEdit_9->text().contains("G") || ui->lineEdit_7->text().contains("H"))
        {
            ui->label_9->setText("Debe usar solo numeros del 0 al 9 y letras de la A a la F");
            //ui->lineEdit_8->setText(ui->lineEdit_8->text().chopped(1));
        }
        else
        {
            ListaSimple *lista = new ListaSimple();//el numero orignal del lineEdit

            Nodo *temp = new Nodo();
            for(int x = 0; x< ui->lineEdit_9->text().size();x++)
                lista->add(ui->lineEdit_9->text().at(x));

            ui->lineEdit_6->setText( hexaToDecimal(lista,temp));

            delete(lista);
            delete(temp);

        }
    }
    else
    {    qDebug () << "ups";
         ui->lineEdit_8->setText("");
         ui->lineEdit_7->setText("");
    }
}

