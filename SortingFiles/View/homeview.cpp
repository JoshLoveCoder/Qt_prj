#include "homeview.h"
#include <QSizePolicy>

HomeView::HomeView(QWidget *parent) : QWidget(parent)
{



    QSizePolicy sp;

    QPushButton *tranBtn = new QPushButton("转移");
    tranBtn->setMinimumHeight(55);

    sp = tranBtn->sizePolicy();
    sp.setVerticalStretch(1);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    tranBtn->setSizePolicy(sp);


    QPlainTextEdit *logView = new QPlainTextEdit;

    sp = logView->sizePolicy();
    sp.setVerticalStretch(5);
    sp.setVerticalPolicy(QSizePolicy::Minimum);
    logView->setSizePolicy(sp);

    QVBoxLayout *leftVBLayout = new QVBoxLayout;
    leftVBLayout->addWidget(tranBtn);
    leftVBLayout->addWidget(logView);
    leftVBLayout->setStretch(0,1);
    leftVBLayout->setStretch(1,1);

    this->setLayout(leftVBLayout);

}
