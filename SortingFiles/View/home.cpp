#include "home.h"

Home::Home(QWidget *parent) : QWidget(parent)
{
    QSizePolicy sp;

    btn = new QPushButton("Title Here");
    btn->setFixedHeight(60);
    sp = btn->sizePolicy();
    sp.setVerticalPolicy(QSizePolicy::Fixed);
//    sp.setHorizontalPolicy(QSizePolicy::Expanding);
    btn->setSizePolicy(sp);

    blow1 = new QWidget();
    blow1->setStyleSheet("background-color:black;");
    blow1->setFixedWidth(60);
    sp = blow1->sizePolicy();
    sp.setHorizontalPolicy(QSizePolicy::Fixed);
    blow1->setSizePolicy(sp);

    blow2 = new QWidget();
    blow2->setStyleSheet("background-color:yellow;");
    blow2->setMinimumWidth(220);
    blow2->setMaximumWidth(320);
    sp = blow2->sizePolicy();
    sp.setHorizontalPolicy(QSizePolicy::MinimumExpanding);
    blow2->setSizePolicy(sp);

    blow3 = new QWidget();
    blow3->setStyleSheet("background-color:purple;");
    blow3->setMinimumWidth(600);
    sp = blow3->sizePolicy();
    sp.setHorizontalPolicy(QSizePolicy::MinimumExpanding);
    blow3->setSizePolicy(sp);

    QHBoxLayout *hlayout = new QHBoxLayout();
    hlayout->setContentsMargins(0,0,0,0);
    hlayout->addWidget(blow1);
    hlayout->addWidget(blow2);
    hlayout->addWidget(blow3);
//    if not setStretch, it will be not stretch
    hlayout->setStretch(0,0);
    hlayout->setStretch(1,3);
    hlayout->setStretch(2,9);

    QWidget *belowView = new QWidget(this);
    belowView->setStyleSheet("background-color:blue;");

    belowView->setMinimumHeight(360);
    belowView->setLayout(hlayout);
    sp = belowView->sizePolicy();
    sp.setVerticalPolicy(QSizePolicy::MinimumExpanding);
    belowView->setSizePolicy(sp);


    QVBoxLayout *vbl = new QVBoxLayout();
    vbl->addWidget(btn);
//    vbl->setStretch(0,1);
    vbl->addWidget(belowView);
//    vbl->setStretch(1,5);
    vbl->setContentsMargins(0,0,0,6);
    this->setLayout(vbl);
}
