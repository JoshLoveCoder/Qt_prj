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

    itemsList = new QWidget();
    itemsList->setStyleSheet("background-color:yellow;border:none");
    itemsList->setMinimumWidth(220);
    itemsList->setMaximumWidth(320);
    sp = itemsList->sizePolicy();
    sp.setHorizontalPolicy(QSizePolicy::MinimumExpanding);
    itemsList->setSizePolicy(sp);

    msgDetails = new QListWidget(this);
    //    msgDetails->setStyleSheet("background-color:lightblue;border:none");
    msgDetails->setMinimumWidth(600);
    sp = msgDetails->sizePolicy();
    sp.setHorizontalPolicy(QSizePolicy::MinimumExpanding);
    msgDetails->setSizePolicy(sp);

    QHBoxLayout *hlayout = new QHBoxLayout();
    hlayout->setContentsMargins(0,0,0,0);
    hlayout->addWidget(blow1);
    hlayout->addWidget(itemsList);
    hlayout->addWidget(msgDetails);
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
    msgDetails->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    msgDetails->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QPushButton *add = new QPushButton(itemsList);
    add->resize(80,80);
    add->setStyleSheet("background-color:red");
    add->setText("add");
    connect(add,SIGNAL(clicked(bool)),this,SLOT(add()));

    QPushButton *del = new QPushButton(itemsList);
    del->resize(80,80);
    del->setText("del");
    connect(del,SIGNAL(clicked(bool)),this,SLOT(del()));

    QPushButton *update = new QPushButton(itemsList);
    update->resize(80,80);
    update->setText("update");
    connect(update,SIGNAL(clicked(bool)),this,SLOT(update()));

    QPushButton *query = new QPushButton(itemsList);
    query->resize(80,80);
    query->setText("query");
    connect(query,SIGNAL(clicked(bool)),this,SLOT(query()));

    QVBoxLayout *vboxlayout = new QVBoxLayout();
    vboxlayout->addWidget(add,1,Qt::AlignCenter);
    vboxlayout->addWidget(del,1,Qt::AlignCenter);
    vboxlayout->addWidget(update,1,Qt::AlignCenter);
    vboxlayout->addWidget(query,1,Qt::AlignCenter);

    itemsList->setLayout(vboxlayout);

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

    msgDetails->insertItem(0,m_1);
    msgDetails->insertItem(1,m_2);
    msgDetails->insertItem(2,m_3);
    msgDetails->insertItem(3,m_4);
    msgDetails->insertItem(4,m_5);
    msgDetails->insertItem(5,m_6);
    msgDetails->insertItem(6,mm1);
    msgDetails->insertItem(6,mm2);
    msgDetails->insertItem(6,mm3);
    msgDetails->insertItem(6,mm4);
    msgDetails->insertItem(6,mm5);


    msgDetails->setItemWidget(m_1,a);
    msgDetails->setItemWidget(m_2,b);
    msgDetails->setItemWidget(m_3,c);
    msgDetails->setItemWidget(m_4,d);
    msgDetails->setItemWidget(m_5,e);
    msgDetails->setItemWidget(m_6,f);
    msgDetails->setItemWidget(mm1,ae1);
    msgDetails->setItemWidget(mm2,ae2);
    msgDetails->setItemWidget(mm3,ae3);
    msgDetails->setItemWidget(mm4,ae4);
    msgDetails->setItemWidget(mm5,ae5);




    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);
    new QListWidgetItem(tr("Oak"), msgDetails);

}
void Home::initConnect(){

}


void Home::add(){
    qDebug()<<"add";
    Form_C *newOne = new Form_C;
    newOne->setText();
    QListWidgetItem *item = new QListWidgetItem;
    item->setSizeHint(QSize(80,80));
    msgDetails->insertItem(msgDetails->count(),item);
    msgDetails->setItemWidget(item,newOne);
    //    msgDetails->update();
    //    msgDetails->repaint();
    msgDetails->scrollToBottom();
}
void  Home::del(){
    qDebug()<<"del";
    QListWidgetItem *toBeDelete = msgDetails->takeItem(msgDetails->count()-1);
//    msgDetails->removeItemWidget(toBeDelete);
    delete toBeDelete;
}
void  Home::update(){
    qDebug()<<"update";

}
void  Home::query(){
    qDebug()<<"query";

}
