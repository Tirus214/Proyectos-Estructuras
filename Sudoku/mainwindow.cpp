#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    juego1 = new Juego();
    juego2 = new Juego();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::llenarSudoku(){
    ui->btn_1->setText(QString::number(juego1->grafo->vertices[0]->dato));
    ui->btn_2->setText(QString::number(juego1->grafo->vertices[1]->dato));
    ui->btn_3->setText(QString::number(juego1->grafo->vertices[2]->dato));
    ui->btn_4->setText(QString::number(juego1->grafo->vertices[3]->dato));
    ui->btn_5->setText(QString::number(juego1->grafo->vertices[4]->dato));
    ui->btn_7->setText(QString::number(juego1->grafo->vertices[5]->dato));
    ui->btn_8->setText(QString::number(juego1->grafo->vertices[6]->dato));
    ui->btn_6->setText(QString::number(juego1->grafo->vertices[7]->dato));
    ui->btn_18->setText(QString::number(juego1->grafo->vertices[8]->dato));
    ui->btn_23->setText(QString::number(juego1->grafo->vertices[9]->dato));
    ui->btn_24->setText(QString::number(juego1->grafo->vertices[10]->dato));
    ui->btn_20->setText(QString::number(juego1->grafo->vertices[11]->dato));
    ui->btn_19->setText(QString::number(juego1->grafo->vertices[12]->dato));
    ui->btn_22->setText(QString::number(juego1->grafo->vertices[13]->dato));
    ui->btn_17->setText(QString::number(juego1->grafo->vertices[14]->dato));
    ui->btn_21->setText(QString::number(juego1->grafo->vertices[15]->dato));
    ui->btn_26->setText(QString::number(juego1->grafo->vertices[16]->dato));
    ui->btn_31->setText(QString::number(juego1->grafo->vertices[17]->dato));
    ui->btn_32->setText(QString::number(juego1->grafo->vertices[18]->dato));
    ui->btn_28->setText(QString::number(juego1->grafo->vertices[19]->dato));
    ui->btn_27->setText(QString::number(juego1->grafo->vertices[20]->dato));
    ui->btn_30->setText(QString::number(juego1->grafo->vertices[21]->dato));
    ui->btn_25->setText(QString::number(juego1->grafo->vertices[22]->dato));
    ui->btn_29->setText(QString::number(juego1->grafo->vertices[23]->dato));
    ui->btn_34->setText(QString::number(juego1->grafo->vertices[24]->dato));
    ui->btn_39->setText(QString::number(juego1->grafo->vertices[25]->dato));
    ui->btn_40->setText(QString::number(juego1->grafo->vertices[26]->dato));
    ui->btn_36->setText(QString::number(juego1->grafo->vertices[27]->dato));
    ui->btn_35->setText(QString::number(juego1->grafo->vertices[28]->dato));
    ui->btn_38->setText(QString::number(juego1->grafo->vertices[29]->dato));
    ui->btn_33->setText(QString::number(juego1->grafo->vertices[30]->dato));
    ui->btn_37->setText(QString::number(juego1->grafo->vertices[31]->dato));
    ui->btn_42->setText(QString::number(juego1->grafo->vertices[32]->dato));
    ui->btn_47->setText(QString::number(juego1->grafo->vertices[33]->dato));
    ui->btn_48->setText(QString::number(juego1->grafo->vertices[34]->dato));
    ui->btn_44->setText(QString::number(juego1->grafo->vertices[35]->dato));
    ui->btn_43->setText(QString::number(juego1->grafo->vertices[36]->dato));
    ui->btn_46->setText(QString::number(juego1->grafo->vertices[37]->dato));
    ui->btn_41->setText(QString::number(juego1->grafo->vertices[38]->dato));
    ui->btn_45->setText(QString::number(juego1->grafo->vertices[39]->dato));
    ui->btn_50->setText(QString::number(juego1->grafo->vertices[40]->dato));
    ui->btn_55->setText(QString::number(juego1->grafo->vertices[41]->dato));
    ui->btn_56->setText(QString::number(juego1->grafo->vertices[42]->dato));
    ui->btn_52->setText(QString::number(juego1->grafo->vertices[43]->dato));
    ui->btn_51->setText(QString::number(juego1->grafo->vertices[44]->dato));
    ui->btn_54->setText(QString::number(juego1->grafo->vertices[45]->dato));
    ui->btn_49->setText(QString::number(juego1->grafo->vertices[46]->dato));
    ui->btn_53->setText(QString::number(juego1->grafo->vertices[47]->dato));
    ui->btn_58->setText(QString::number(juego1->grafo->vertices[48]->dato));
    ui->btn_63->setText(QString::number(juego1->grafo->vertices[49]->dato));
    ui->btn_64->setText(QString::number(juego1->grafo->vertices[50]->dato));
    ui->btn_60->setText(QString::number(juego1->grafo->vertices[51]->dato));
    ui->btn_59->setText(QString::number(juego1->grafo->vertices[52]->dato));
    ui->btn_62->setText(QString::number(juego1->grafo->vertices[53]->dato));
    ui->btn_57->setText(QString::number(juego1->grafo->vertices[54]->dato));
    ui->btn_61->setText(QString::number(juego1->grafo->vertices[55]->dato));
    ui->btn_66->setText(QString::number(juego1->grafo->vertices[56]->dato));
    ui->btn_71->setText(QString::number(juego1->grafo->vertices[57]->dato));
    ui->btn_72->setText(QString::number(juego1->grafo->vertices[58]->dato));
    ui->btn_68->setText(QString::number(juego1->grafo->vertices[59]->dato));
    ui->btn_67->setText(QString::number(juego1->grafo->vertices[60]->dato));
    ui->btn_70->setText(QString::number(juego1->grafo->vertices[61]->dato));
    ui->btn_65->setText(QString::number(juego1->grafo->vertices[62]->dato));
    ui->btn_69->setText(QString::number(juego1->grafo->vertices[63]->dato));
}


void MainWindow::llenarSudoku2(){
    ui->btn_73->setText(QString::number(juego2->grafo->vertices[0]->dato));
    ui->btn_74->setText(QString::number(juego2->grafo->vertices[1]->dato));
    ui->btn_75->setText(QString::number(juego2->grafo->vertices[2]->dato));
    ui->btn_76->setText(QString::number(juego2->grafo->vertices[3]->dato));
    ui->btn_77->setText(QString::number(juego2->grafo->vertices[4]->dato));
    ui->btn_79->setText(QString::number(juego2->grafo->vertices[5]->dato));
    ui->btn_80->setText(QString::number(juego2->grafo->vertices[6]->dato));
    ui->btn_78->setText(QString::number(juego2->grafo->vertices[7]->dato));
    ui->btn_82->setText(QString::number(juego2->grafo->vertices[8]->dato));
    ui->btn_87->setText(QString::number(juego2->grafo->vertices[9]->dato));
    ui->btn_88->setText(QString::number(juego2->grafo->vertices[10]->dato));
    ui->btn_84->setText(QString::number(juego2->grafo->vertices[11]->dato));
    ui->btn_83->setText(QString::number(juego2->grafo->vertices[12]->dato));
    ui->btn_86->setText(QString::number(juego2->grafo->vertices[13]->dato));
    ui->btn_81->setText(QString::number(juego2->grafo->vertices[14]->dato));
    ui->btn_85->setText(QString::number(juego2->grafo->vertices[15]->dato));
    ui->btn_90->setText(QString::number(juego2->grafo->vertices[16]->dato));
    ui->btn_95->setText(QString::number(juego2->grafo->vertices[17]->dato));
    ui->btn_96->setText(QString::number(juego2->grafo->vertices[18]->dato));
    ui->btn_92->setText(QString::number(juego2->grafo->vertices[19]->dato));
    ui->btn_91->setText(QString::number(juego2->grafo->vertices[20]->dato));
    ui->btn_94->setText(QString::number(juego2->grafo->vertices[21]->dato));
    ui->btn_89->setText(QString::number(juego2->grafo->vertices[22]->dato));
    ui->btn_93->setText(QString::number(juego2->grafo->vertices[23]->dato));
    ui->btn_98->setText(QString::number(juego2->grafo->vertices[24]->dato));
    ui->btn_103->setText(QString::number(juego2->grafo->vertices[25]->dato));
    ui->btn_104->setText(QString::number(juego2->grafo->vertices[26]->dato));
    ui->btn_100->setText(QString::number(juego2->grafo->vertices[27]->dato));
    ui->btn_99->setText(QString::number(juego2->grafo->vertices[28]->dato));
    ui->btn_102->setText(QString::number(juego2->grafo->vertices[29]->dato));
    ui->btn_97->setText(QString::number(juego2->grafo->vertices[30]->dato));
    ui->btn_101->setText(QString::number(juego2->grafo->vertices[31]->dato));
    ui->btn_106->setText(QString::number(juego2->grafo->vertices[32]->dato));
    ui->btn_111->setText(QString::number(juego2->grafo->vertices[33]->dato));
    ui->btn_112->setText(QString::number(juego2->grafo->vertices[34]->dato));
    ui->btn_108->setText(QString::number(juego2->grafo->vertices[35]->dato));
    ui->btn_107->setText(QString::number(juego2->grafo->vertices[36]->dato));
    ui->btn_110->setText(QString::number(juego2->grafo->vertices[37]->dato));
    ui->btn_105->setText(QString::number(juego2->grafo->vertices[38]->dato));
    ui->btn_109->setText(QString::number(juego2->grafo->vertices[39]->dato));
    ui->btn_114->setText(QString::number(juego2->grafo->vertices[40]->dato));
    ui->btn_119->setText(QString::number(juego2->grafo->vertices[41]->dato));
    ui->btn_120->setText(QString::number(juego2->grafo->vertices[42]->dato));
    ui->btn_116->setText(QString::number(juego2->grafo->vertices[43]->dato));
    ui->btn_115->setText(QString::number(juego2->grafo->vertices[44]->dato));
    ui->btn_118->setText(QString::number(juego2->grafo->vertices[45]->dato));
    ui->btn_113->setText(QString::number(juego2->grafo->vertices[46]->dato));
    ui->btn_117->setText(QString::number(juego2->grafo->vertices[47]->dato));
    ui->btn_122->setText(QString::number(juego2->grafo->vertices[48]->dato));
    ui->btn_127->setText(QString::number(juego2->grafo->vertices[49]->dato));
    ui->btn_128->setText(QString::number(juego2->grafo->vertices[50]->dato));
    ui->btn_124->setText(QString::number(juego2->grafo->vertices[51]->dato));
    ui->btn_123->setText(QString::number(juego2->grafo->vertices[52]->dato));
    ui->btn_126->setText(QString::number(juego2->grafo->vertices[53]->dato));
    ui->btn_121->setText(QString::number(juego2->grafo->vertices[54]->dato));
    ui->btn_125->setText(QString::number(juego2->grafo->vertices[55]->dato));
    ui->btn_130->setText(QString::number(juego2->grafo->vertices[56]->dato));
    ui->btn_135->setText(QString::number(juego2->grafo->vertices[57]->dato));
    ui->btn_136->setText(QString::number(juego2->grafo->vertices[58]->dato));
    ui->btn_132->setText(QString::number(juego2->grafo->vertices[59]->dato));
    ui->btn_131->setText(QString::number(juego2->grafo->vertices[60]->dato));
    ui->btn_134->setText(QString::number(juego2->grafo->vertices[61]->dato));
    ui->btn_129->setText(QString::number(juego2->grafo->vertices[62]->dato));
    ui->btn_133->setText(QString::number(juego2->grafo->vertices[63]->dato));
}


void MainWindow::on_btnSolucionar_clicked(){
    juego1->solucionar();
    llenarSudoku();
}


void MainWindow::on_btnSiguiente_clicked(){
    //juego2->solucionarPorPaso();
    llenarSudoku2();
}


void MainWindow::on_btn_1_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[0]->dato = num;
    juego1->grafo->vertices[0]->modificable = false;
    juego2->grafo->vertices[0]->dato = num;
    juego2->grafo->vertices[0]->modificable = false;
    ui->btn_1->setText(QString::number(num));
    ui->btn_73->setText(QString::number(num));
}

void MainWindow::on_btn_2_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[1]->dato = num;
    juego2->grafo->vertices[1]->dato = num;
    juego1->grafo->vertices[1]->modificable = false;
    juego2->grafo->vertices[1]->modificable = false;
    ui->btn_2->setText(QString::number(num));
    ui->btn_74->setText(QString::number(num));
}
void MainWindow::on_btn_3_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[2]->dato = num;
    juego2->grafo->vertices[2]->dato = num;
    juego1->grafo->vertices[2]->modificable = false;
    juego2->grafo->vertices[2]->modificable = false;
    ui->btn_3->setText(QString::number(num));
    ui->btn_75->setText(QString::number(num));
}
void MainWindow::on_btn_4_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[3]->dato = num;
    juego2->grafo->vertices[3]->dato = num;
    juego1->grafo->vertices[3]->modificable = false;
    juego2->grafo->vertices[3]->modificable = false;
    ui->btn_4->setText(QString::number(num));
    ui->btn_76->setText(QString::number(num));
}
void MainWindow::on_btn_5_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[4]->dato = num;
    juego2->grafo->vertices[4]->dato = num;
    juego1->grafo->vertices[4]->modificable = false;
    juego2->grafo->vertices[4]->modificable = false;
    ui->btn_5->setText(QString::number(num));
    ui->btn_77->setText(QString::number(num));
}
void MainWindow::on_btn_6_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[7]->dato = num;
    juego2->grafo->vertices[7]->dato = num;
    juego1->grafo->vertices[7]->modificable = false;
    juego2->grafo->vertices[7]->modificable = false;
    ui->btn_6->setText(QString::number(num));
    ui->btn_78->setText(QString::number(num));
}
void MainWindow::on_btn_7_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[5]->dato = num;
    juego2->grafo->vertices[5]->dato = num;
    juego1->grafo->vertices[5]->modificable = false;
    juego2->grafo->vertices[5]->modificable = false;
    ui->btn_7->setText(QString::number(num));
    ui->btn_79->setText(QString::number(num));
}
void MainWindow::on_btn_8_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[6]->dato = num;
    juego2->grafo->vertices[6]->dato = num;
    juego1->grafo->vertices[6]->modificable = false;
    juego2->grafo->vertices[6]->modificable = false;
    ui->btn_8->setText(QString::number(num));
    ui->btn_80->setText(QString::number(num));
}
void MainWindow::on_btn_17_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[14]->dato = num;
    ui->btn_17->setText(QString::number(num));
    juego2->grafo->vertices[14]->dato = num;
    juego1->grafo->vertices[14]->modificable = false;
    juego2->grafo->vertices[14]->modificable = false;
    ui->btn_89->setText(QString::number(num));
}
void MainWindow::on_btn_18_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[8]->dato = num;
    juego1->grafo->vertices[8]->modificable = false;
    ui->btn_18->setText(QString::number(num));
    juego2->grafo->vertices[8]->dato = num;
    juego2->grafo->vertices[8]->modificable = false;
    ui->btn_90->setText(QString::number(num));

}
void MainWindow::on_btn_19_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[12]->dato = num;
    juego1->grafo->vertices[12]->modificable = false;
    ui->btn_19->setText(QString::number(num));
    juego2->grafo->vertices[12]->dato = num;
    juego2->grafo->vertices[12]->modificable = false;
    ui->btn_91->setText(QString::number(num));

}
void MainWindow::on_btn_20_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[11]->dato = num;
    juego1->grafo->vertices[11]->modificable = false;
    ui->btn_20->setText(QString::number(num));
    juego2->grafo->vertices[11]->dato = num;
    juego2->grafo->vertices[11]->modificable = false;
    ui->btn_92->setText(QString::number(num));
}
void MainWindow::on_btn_21_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[15]->dato = num;
    juego1->grafo->vertices[15]->modificable = false;
    ui->btn_21->setText(QString::number(num));
    juego2->grafo->vertices[15]->dato = num;
    juego2->grafo->vertices[15]->modificable = false;
    ui->btn_93->setText(QString::number(num));
}
void MainWindow::on_btn_22_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[13]->dato = num;
    ui->btn_22->setText(QString::number(num));
    juego1->grafo->vertices[13]->modificable = false;
    juego2->grafo->vertices[13]->dato = num;
    juego2->grafo->vertices[13]->modificable = false;
    ui->btn_94->setText(QString::number(num));

}
void MainWindow::on_btn_23_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[9]->dato = num;
    ui->btn_23->setText(QString::number(num));
    juego1->grafo->vertices[9]->modificable = false;
    juego2->grafo->vertices[9]->dato = num;
    juego2->grafo->vertices[9]->modificable = false;
    ui->btn_95->setText(QString::number(num));
}
void MainWindow::on_btn_24_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[10]->dato = num;
    ui->btn_24->setText(QString::number(num));
    juego1->grafo->vertices[10]->modificable = false;
    juego2->grafo->vertices[10]->dato = num;
    juego2->grafo->vertices[10]->modificable = false;
    ui->btn_96->setText(QString::number(num));
}
void MainWindow::on_btn_25_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[22]->dato = num;
    ui->btn_25->setText(QString::number(num));
    juego1->grafo->vertices[22]->modificable = false;
    juego2->grafo->vertices[22]->dato = num;
    juego2->grafo->vertices[22]->modificable = false;
    ui->btn_97->setText(QString::number(num));
}
void MainWindow::on_btn_26_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[16]->dato = num;
    ui->btn_26->setText(QString::number(num));
    juego1->grafo->vertices[16]->modificable = false;
    juego2->grafo->vertices[16]->dato = num;
    juego2->grafo->vertices[16]->modificable = false;
    ui->btn_98->setText(QString::number(num));
}
void MainWindow::on_btn_27_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[20]->dato = num;
    ui->btn_27->setText(QString::number(num));
    juego1->grafo->vertices[20]->modificable = false;
    juego2->grafo->vertices[20]->dato = num;
    juego2->grafo->vertices[20]->modificable = false;
    ui->btn_99->setText(QString::number(num));
}
void MainWindow::on_btn_28_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[19]->dato = num;
    ui->btn_28->setText(QString::number(num));
    juego1->grafo->vertices[19]->modificable = false;
    juego2->grafo->vertices[19]->dato = num;
    juego2->grafo->vertices[19]->modificable = false;
    ui->btn_100->setText(QString::number(num));
}
void MainWindow::on_btn_29_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[23]->dato = num;
    ui->btn_29->setText(QString::number(num));
    juego1->grafo->vertices[23]->modificable = false;
    juego2->grafo->vertices[23]->dato = num;
    juego2->grafo->vertices[23]->modificable = false;
    ui->btn_101->setText(QString::number(num));
}
void MainWindow::on_btn_30_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[21]->dato = num;
    ui->btn_30->setText(QString::number(num));
    juego1->grafo->vertices[21]->modificable = false;
    juego2->grafo->vertices[21]->dato = num;
    juego2->grafo->vertices[21]->modificable = false;
    ui->btn_102->setText(QString::number(num));
}
void MainWindow::on_btn_31_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[17]->dato = num;
    ui->btn_31->setText(QString::number(num));
    juego1->grafo->vertices[17]->modificable = false;
    juego2->grafo->vertices[17]->dato = num;
    juego2->grafo->vertices[17]->modificable = false;
    ui->btn_103->setText(QString::number(num));
}
void MainWindow::on_btn_32_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[18]->dato = num;
    ui->btn_32->setText(QString::number(num));
    juego1->grafo->vertices[18]->modificable = false;
    juego2->grafo->vertices[18]->dato = num;
    juego2->grafo->vertices[18]->modificable = false;
    ui->btn_104->setText(QString::number(num));
}
void MainWindow::on_btn_33_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[30]->dato = num;
    ui->btn_33->setText(QString::number(num));
    juego1->grafo->vertices[30]->modificable = false;
    juego2->grafo->vertices[30]->dato = num;
    juego2->grafo->vertices[30]->modificable = false;
    ui->btn_105->setText(QString::number(num));
}
void MainWindow::on_btn_34_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[24]->dato = num;
    ui->btn_34->setText(QString::number(num));
    juego1->grafo->vertices[24]->modificable = false;
    juego2->grafo->vertices[24]->dato = num;
    juego2->grafo->vertices[24]->modificable = false;
    ui->btn_106->setText(QString::number(num));
}
void MainWindow::on_btn_35_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[28]->dato = num;
    ui->btn_35->setText(QString::number(num));
    juego1->grafo->vertices[28]->modificable = false;
    juego2->grafo->vertices[28]->dato = num;
    juego2->grafo->vertices[28]->modificable = false;
    ui->btn_107->setText(QString::number(num));
}
void MainWindow::on_btn_36_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[27]->dato = num;
    ui->btn_36->setText(QString::number(num));
    juego1->grafo->vertices[27]->modificable = false;
    juego2->grafo->vertices[27]->dato = num;
    juego2->grafo->vertices[27]->modificable = false;
    ui->btn_108->setText(QString::number(num));
}
void MainWindow::on_btn_37_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[31]->dato = num;
    ui->btn_37->setText(QString::number(num));
    juego1->grafo->vertices[20]->modificable = false;
    juego2->grafo->vertices[20]->dato = num;
    juego2->grafo->vertices[20]->modificable = false;
    ui->btn_109->setText(QString::number(num));
}
void MainWindow::on_btn_38_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[29]->dato = num;
    ui->btn_38->setText(QString::number(num));
    juego1->grafo->vertices[29]->modificable = false;
    juego2->grafo->vertices[29]->dato = num;
    juego2->grafo->vertices[29]->modificable = false;
    ui->btn_110->setText(QString::number(num));
}
void MainWindow::on_btn_39_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[25]->dato = num;
    ui->btn_39->setText(QString::number(num));
    juego1->grafo->vertices[25]->modificable = false;
    juego2->grafo->vertices[25]->dato = num;
    juego2->grafo->vertices[25]->modificable = false;
    ui->btn_111->setText(QString::number(num));
}
void MainWindow::on_btn_40_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[26]->dato = num;
    ui->btn_40->setText(QString::number(num));
    juego1->grafo->vertices[26]->modificable = false;
    juego2->grafo->vertices[26]->dato = num;
    juego2->grafo->vertices[26]->modificable = false;
    ui->btn_112->setText(QString::number(num));
}
void MainWindow::on_btn_41_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[38]->dato = num;
    ui->btn_41->setText(QString::number(num));
    juego1->grafo->vertices[38]->modificable = false;
    juego2->grafo->vertices[38]->dato = num;
    juego2->grafo->vertices[38]->modificable = false;
    ui->btn_113->setText(QString::number(num));
}
void MainWindow::on_btn_42_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[32]->dato = num;
    ui->btn_42->setText(QString::number(num));
    juego1->grafo->vertices[32]->modificable = false;
    juego2->grafo->vertices[32]->dato = num;
    juego2->grafo->vertices[32]->modificable = false;
    ui->btn_114->setText(QString::number(num));
}
void MainWindow::on_btn_43_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[36]->dato = num;
    ui->btn_43->setText(QString::number(num));
    juego1->grafo->vertices[36]->modificable = false;
    juego2->grafo->vertices[36]->dato = num;
    juego2->grafo->vertices[36]->modificable = false;
    ui->btn_115->setText(QString::number(num));
}
void MainWindow::on_btn_44_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[35]->dato = num;
    ui->btn_44->setText(QString::number(num));
    juego1->grafo->vertices[35]->modificable = false;
    juego2->grafo->vertices[35]->dato = num;
    juego2->grafo->vertices[35]->modificable = false;
    ui->btn_116->setText(QString::number(num));
}
void MainWindow::on_btn_45_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[39]->dato = num;
    ui->btn_45->setText(QString::number(num));
    juego1->grafo->vertices[39]->modificable = false;
    juego2->grafo->vertices[39]->dato = num;
    juego2->grafo->vertices[39]->modificable = false;
    ui->btn_117->setText(QString::number(num));
}
void MainWindow::on_btn_46_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[37]->dato = num;
    ui->btn_46->setText(QString::number(num));
    juego1->grafo->vertices[37]->modificable = false;
    juego2->grafo->vertices[37]->dato = num;
    juego2->grafo->vertices[37]->modificable = false;
    ui->btn_118->setText(QString::number(num));
}
void MainWindow::on_btn_47_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[33]->dato = num;
    ui->btn_47->setText(QString::number(num));
    juego1->grafo->vertices[33]->modificable = false;
    juego2->grafo->vertices[33]->dato = num;
    juego2->grafo->vertices[33]->modificable = false;
    ui->btn_119->setText(QString::number(num));
}
void MainWindow::on_btn_48_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[34]->dato = num;
    ui->btn_48->setText(QString::number(num));
    juego1->grafo->vertices[34]->modificable = false;
    juego2->grafo->vertices[34]->dato = num;
    juego2->grafo->vertices[34]->modificable = false;
    ui->btn_120->setText(QString::number(num));
}
void MainWindow::on_btn_49_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[46]->dato = num;
    ui->btn_49->setText(QString::number(num));
    juego1->grafo->vertices[46]->modificable = false;
    juego2->grafo->vertices[46]->dato = num;
    juego2->grafo->vertices[46]->modificable = false;
    ui->btn_121->setText(QString::number(num));
}
void MainWindow::on_btn_50_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[40]->dato = num;
    ui->btn_50->setText(QString::number(num));
    juego1->grafo->vertices[40]->modificable = false;
    juego2->grafo->vertices[40]->dato = num;
    juego2->grafo->vertices[40]->modificable = false;
    ui->btn_122->setText(QString::number(num));
}
void MainWindow::on_btn_51_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[44]->dato = num;
    ui->btn_51->setText(QString::number(num));
    juego1->grafo->vertices[44]->modificable = false;
    juego2->grafo->vertices[44]->dato = num;
    juego2->grafo->vertices[44]->modificable = false;
    ui->btn_122->setText(QString::number(num));
}
void MainWindow::on_btn_52_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[43]->dato = num;
    ui->btn_52->setText(QString::number(num));
    juego1->grafo->vertices[43]->modificable = false;
    juego2->grafo->vertices[43]->dato = num;
    juego2->grafo->vertices[43]->modificable = false;
    ui->btn_123->setText(QString::number(num));
}
void MainWindow::on_btn_53_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[47]->dato = num;
    ui->btn_53->setText(QString::number(num));
    juego1->grafo->vertices[47]->modificable = false;
    juego2->grafo->vertices[47]->dato = num;
    juego2->grafo->vertices[47]->modificable = false;
    ui->btn_124->setText(QString::number(num));
}
void MainWindow::on_btn_54_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[45]->dato = num;
    ui->btn_54->setText(QString::number(num));
    juego1->grafo->vertices[45]->modificable = false;
    juego2->grafo->vertices[45]->dato = num;
    juego2->grafo->vertices[45]->modificable = false;
    ui->btn_125->setText(QString::number(num));
}
void MainWindow::on_btn_55_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[41]->dato = num;
    ui->btn_55->setText(QString::number(num));
    juego1->grafo->vertices[41]->modificable = false;
    juego2->grafo->vertices[41]->dato = num;
    juego2->grafo->vertices[41]->modificable = false;
    ui->btn_126->setText(QString::number(num));
}
void MainWindow::on_btn_56_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[42]->dato = num;
    ui->btn_56->setText(QString::number(num));
    juego1->grafo->vertices[42]->modificable = false;
    juego2->grafo->vertices[42]->dato = num;
    juego2->grafo->vertices[42]->modificable = false;
    ui->btn_127->setText(QString::number(num));
}
void MainWindow::on_btn_57_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[54]->dato = num;
    ui->btn_57->setText(QString::number(num));
    juego1->grafo->vertices[54]->modificable = false;
    juego2->grafo->vertices[54]->dato = num;
    juego2->grafo->vertices[54]->modificable = false;
    ui->btn_128->setText(QString::number(num));
}
void MainWindow::on_btn_58_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[48]->dato = num;
    ui->btn_58->setText(QString::number(num));
    juego1->grafo->vertices[48]->modificable = false;
    juego2->grafo->vertices[48]->dato = num;
    juego2->grafo->vertices[48]->modificable = false;
    ui->btn_129->setText(QString::number(num));
}
void MainWindow::on_btn_59_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[52]->dato = num;
    ui->btn_59->setText(QString::number(num));
    juego1->grafo->vertices[52]->modificable = false;
    juego2->grafo->vertices[52]->dato = num;
    juego2->grafo->vertices[52]->modificable = false;
    ui->btn_130->setText(QString::number(num));
}
void MainWindow::on_btn_60_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[51]->dato = num;
    ui->btn_60->setText(QString::number(num));
    juego1->grafo->vertices[51]->modificable = false;
    juego2->grafo->vertices[51]->dato = num;
    juego2->grafo->vertices[51]->modificable = false;
    ui->btn_131->setText(QString::number(num));
}
void MainWindow::on_btn_61_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[55]->dato = num;
    ui->btn_61->setText(QString::number(num));
    juego1->grafo->vertices[55]->modificable = false;
    juego2->grafo->vertices[55]->dato = num;
    juego2->grafo->vertices[55]->modificable = false;
    ui->btn_132->setText(QString::number(num));
}
void MainWindow::on_btn_62_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[53]->dato = num;
    ui->btn_62->setText(QString::number(num));
    juego1->grafo->vertices[53]->modificable = false;
    juego2->grafo->vertices[53]->dato = num;
    juego2->grafo->vertices[53]->modificable = false;
    ui->btn_133->setText(QString::number(num));
}
void MainWindow::on_btn_63_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[49]->dato = num;
    ui->btn_63->setText(QString::number(num));
    juego1->grafo->vertices[49]->modificable = false;
    juego2->grafo->vertices[49]->dato = num;
    juego2->grafo->vertices[49]->modificable = false;
    ui->btn_134->setText(QString::number(num));
}
void MainWindow::on_btn_64_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[50]->dato = num;
    ui->btn_64->setText(QString::number(num));
    juego1->grafo->vertices[50]->modificable = false;
    juego2->grafo->vertices[50]->dato = num;
    juego2->grafo->vertices[50]->modificable = false;
    ui->btn_135->setText(QString::number(num));
}
void MainWindow::on_btn_65_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[62]->dato = num;
    ui->btn_65->setText(QString::number(num));
    juego1->grafo->vertices[62]->modificable = false;
    juego2->grafo->vertices[62]->dato = num;
    juego2->grafo->vertices[62]->modificable = false;
    ui->btn_136->setText(QString::number(num));
}
void MainWindow::on_btn_66_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[56]->dato = num;
    ui->btn_66->setText(QString::number(num));
    juego1->grafo->vertices[56]->modificable = false;
    juego2->grafo->vertices[56]->dato = num;
    juego2->grafo->vertices[56]->modificable = false;
    ui->btn_133->setText(QString::number(num));
}
void MainWindow::on_btn_67_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[60]->dato = num;
    ui->btn_67->setText(QString::number(num));
    juego1->grafo->vertices[60]->modificable = false;
    juego2->grafo->vertices[60]->dato = num;
    juego2->grafo->vertices[60]->modificable = false;
    ui->btn_130->setText(QString::number(num));
}
void MainWindow::on_btn_68_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[59]->dato = num;
    ui->btn_68->setText(QString::number(num));
    juego1->grafo->vertices[59]->modificable = false;
    juego2->grafo->vertices[59]->dato = num;
    juego2->grafo->vertices[59]->modificable = false;
    ui->btn_130->setText(QString::number(num));
}
void MainWindow::on_btn_69_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[63]->dato = num;
    ui->btn_69->setText(QString::number(num));
    juego1->grafo->vertices[63]->modificable = false;
    juego2->grafo->vertices[63]->dato = num;
    juego2->grafo->vertices[63]->modificable = false;
    ui->btn_130->setText(QString::number(num));
}
void MainWindow::on_btn_70_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[61]->dato = num;
    ui->btn_70->setText(QString::number(num));
    juego1->grafo->vertices[61]->modificable = false;
    juego2->grafo->vertices[61]->dato = num;
    juego2->grafo->vertices[61]->modificable = false;
    ui->btn_130->setText(QString::number(num));
}
void MainWindow::on_btn_71_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[57]->dato = num;
    ui->btn_71->setText(QString::number(num));
    juego1->grafo->vertices[57]->modificable = false;
    juego2->grafo->vertices[57]->dato = num;
    juego2->grafo->vertices[57]->modificable = false;
    ui->btn_135->setText(QString::number(num));
}
void MainWindow::on_btn_72_clicked(){
    int num = ui->spinBox->text().toInt();
    juego1->grafo->vertices[58]->dato = num;
    ui->btn_72->setText(QString::number(num));
    juego1->grafo->vertices[58]->modificable = false;
    juego2->grafo->vertices[58]->dato = num;
    juego2->grafo->vertices[58]->modificable = false;
    ui->btn_136->setText(QString::number(num));
}
