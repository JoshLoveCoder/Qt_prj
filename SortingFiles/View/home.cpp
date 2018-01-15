#include "home.h"

Home::Home(QWidget *parent) : QWidget(parent)
{
    QSizePolicy sp;

    btn = new QPushButton("Title Here");
    btn->setStyleSheet("background-color:green;border:none");
    btn->setFixedHeight(60);
    sp = btn->sizePolicy();
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    //    sp.setHorizontalPolicy(QSizePolicy::Expanding);
    btn->setSizePolicy(sp);

    blow1 = new QWidget();
    blow1->setStyleSheet("background-color:lightblue;border:none");
    blow1->setFixedWidth(60);
    sp = blow1->sizePolicy();
    sp.setHorizontalPolicy(QSizePolicy::Fixed);
    blow1->setSizePolicy(sp);

    blow2 = new QWidget();
    blow2->setStyleSheet("background-color:yellow;border:none");
    blow2->setMinimumWidth(220);
    blow2->setMaximumWidth(320);
    sp = blow2->sizePolicy();
    sp.setHorizontalPolicy(QSizePolicy::MinimumExpanding);
    blow2->setSizePolicy(sp);

    blow3 = new QListWidget(this);
    //    blow3->setStyleSheet("background-color:lightblue;border:none");
    blow3->setMinimumWidth(600);
    sp = blow3->sizePolicy();
    sp.setHorizontalPolicy(QSizePolicy::MinimumExpanding);
    blow3->setSizePolicy(sp);

    QHBoxLayout *hlayout = new QHBoxLayout();
    hlayout->setContentsMargins(0,0,0,0);
    hlayout->addWidget(blow1);
    hlayout->addWidget(blow2);
    hlayout->addWidget(blow3);
    // this default is 6,or ohters
    hlayout->setSpacing(0);
    //    if not setStretch, it will be not stretch
    hlayout->setStretch(0,0);
    hlayout->setStretch(1,3);
    hlayout->setStretch(2,9);

    QWidget *belowView = new QWidget(this);
    belowView->setStyleSheet("background-color:white;");

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
    vbl->setSpacing(0);
    this->setLayout(vbl);


    initData();
    initUI();
    initSetting();
}


void Home::initData(){

}
void Home::initUI(){
    blow3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    blow3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}
void Home::initSetting(){

    Form_B *a = new Form_B();
    Form_B *b = new Form_B;
    Form_B *c = new Form_B;
    Form_B *d = new Form_B;
    Form_B *e = new Form_B;
    Form_B *f = new Form_B;

    Form_C *ae1 = new Form_C;
    Form_C *ae2 = new Form_C;
    Form_C *ae3 = new Form_C;
    Form_C *ae4 = new Form_C;
    Form_C *ae5 = new Form_C;

    QListWidgetItem *m_1 = new QListWidgetItem;
    QListWidgetItem *m_2 = new QListWidgetItem;
    QListWidgetItem *m_3 = new QListWidgetItem;
    QListWidgetItem *m_4 = new QListWidgetItem;
    QListWidgetItem *m_5 = new QListWidgetItem;
    QListWidgetItem *m_6 = new QListWidgetItem;
    QListWidgetItem *mm1 = new QListWidgetItem;
    QListWidgetItem *mm2 = new QListWidgetItem;
    QListWidgetItem *mm3 = new QListWidgetItem;
    QListWidgetItem *mm4 = new QListWidgetItem;
    QListWidgetItem *mm5 = new QListWidgetItem;

    m_1->setSizeHint(QSize(80,80));
    m_2->setSizeHint(QSize(80,80));
    m_3->setSizeHint(QSize(80,80));
    m_4->setSizeHint(QSize(80,80));
    m_5->setSizeHint(QSize(80,80));
    m_6->setSizeHint(QSize(80,80));
    mm1->setSizeHint(QSize(80,80));
    mm2->setSizeHint(QSize(80,80));
    mm3->setSizeHint(QSize(80,80));
    mm4->setSizeHint(QSize(80,80));
    mm5->setSizeHint(QSize(80,80));

    blow3->insertItem(0,m_1);
    blow3->insertItem(1,m_2);
    blow3->insertItem(2,m_3);
    blow3->insertItem(3,m_4);
    blow3->insertItem(4,m_5);
    blow3->insertItem(5,m_6);
    blow3->insertItem(6,mm1);
    blow3->insertItem(6,mm2);
    blow3->insertItem(6,mm3);
    blow3->insertItem(6,mm4);
    blow3->insertItem(6,mm5);


    blow3->setItemWidget(m_1,a);
    blow3->setItemWidget(m_2,b);
    blow3->setItemWidget(m_3,c);
    blow3->setItemWidget(m_4,d);
    blow3->setItemWidget(m_5,e);
    blow3->setItemWidget(m_6,f);
    blow3->setItemWidget(mm1,ae1);
    blow3->setItemWidget(mm2,ae2);
    blow3->setItemWidget(mm3,ae3);
    blow3->setItemWidget(mm4,ae4);
    blow3->setItemWidget(mm5,ae5);




    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);
    new QListWidgetItem(tr("Oak"), blow3);

}
void Home::initConnect(){

}
