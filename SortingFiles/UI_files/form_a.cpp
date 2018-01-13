#include "form_a.h"
#include "ui_form_a.h"

Form_A::Form_A(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_A)
{
    ui->setupUi(this);
}

Form_A::~Form_A()
{
    delete ui;
}
