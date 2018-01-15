#include "form_c.h"
#include "ui_form_c.h"

Form_C::Form_C(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_C)
{
    ui->setupUi(this);
    int wid = this->geometry().width()/2;
    int hei = this->geometry().height();
    ui->horizontalSpacer->setGeometry( QRect(0,0,wid,hei) );
    ui->plainTextEdit->setLineWrapMode(QPlainTextEdit::WidgetWidth);
    ui->plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->plainTextEdit->setContentsMargins(10,5,5,10);
    this->setStyleSheet("border:0px;backgroundcolor:lightblue;QListWidget::item:selected { background-color:red }");

}

Form_C::~Form_C()
{
    delete ui;
}
