#include "homeview.h"
#include <QSizePolicy>

static int defaultLength = 50;

HomeView::HomeView(QWidget *parent) : QWidget(parent)
{
    QSizePolicy sp;

    tranBtn = new QPushButton("转移");
    tranBtn->setMinimumHeight(defaultLength);
//    tranBtn->resize(defaultLength,defaultLength);
    tranBtn->setContentsMargins(0,0,0,0);
    connect(tranBtn,SIGNAL(clicked(bool)),this,SLOT(transTouched()));

    sp = tranBtn->sizePolicy();
    sp.setVerticalStretch(1);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    tranBtn->setSizePolicy(sp);

    QPlainTextEdit *logView = new QPlainTextEdit("Log:\n");
    sp = logView->sizePolicy();
    sp.setVerticalStretch(1);
    sp.setVerticalPolicy(QSizePolicy::Minimum);
    logView->setSizePolicy(sp);
    logView->setContentsMargins(0,0,0,0);

    QVBoxLayout *leftVBLayout = new QVBoxLayout;
    leftVBLayout->addWidget(tranBtn);
    leftVBLayout->addWidget(logView);
//    leftVBLayout->setStretch(0,1);
//    leftVBLayout->setStretch(1,5);
    leftVBLayout->setContentsMargins(0,0,0,0);
    QWidget *leftVeiw = new QWidget;
    leftVeiw->setLayout(leftVBLayout);
    leftVeiw->setContentsMargins(0,0,0,0);

    QToolButton *toolBtn1 = new QToolButton();
    toolBtn1->setText("Source");
    toolBtn1->setMinimumSize(defaultLength,defaultLength);
    sp = toolBtn1->sizePolicy();
    sp.setVerticalStretch(0);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    toolBtn1->setSizePolicy(sp);
    ptext1 = new QPlainTextEdit();
    ptext1->setMinimumHeight(defaultLength);
    sp = ptext1->sizePolicy();
    sp.setVerticalStretch(0);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    ptext1->setSizePolicy(sp);

    QHBoxLayout *vbl1 = new QHBoxLayout;
    vbl1->addWidget(toolBtn1);
    vbl1->addWidget(ptext1);
    vbl1->setContentsMargins(0,0,0,0);
    QWidget *a1 = new QWidget;
    a1->setLayout(vbl1);
    a1->setMinimumHeight(defaultLength);

    QToolButton *toolBtn2 = new QToolButton();
    toolBtn2->setText("Dest");
    toolBtn2->setMinimumSize(defaultLength,defaultLength);
    sp = toolBtn2->sizePolicy();
    sp.setVerticalStretch(0);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    toolBtn2->setSizePolicy(sp);
    ptext2 = new QPlainTextEdit();
    ptext2->setMinimumHeight(defaultLength);
    sp = ptext2->sizePolicy();
    sp.setVerticalStretch(0);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    ptext2->setSizePolicy(sp);

    QHBoxLayout *vbl2 = new QHBoxLayout;
    vbl2->addWidget(toolBtn2);
    vbl2->addWidget(ptext2);
    vbl2->setContentsMargins(0,0,0,0);
    QWidget *a2 = new QWidget;
    a2->setLayout(vbl2);
    a2->setMinimumHeight(defaultLength);


    QPlainTextEdit *fileType = new QPlainTextEdit("dest file path:\n");
    QVBoxLayout *rightVLayout = new QVBoxLayout;
    rightVLayout->addWidget(a1,1);
    rightVLayout->addWidget(a2,1);
    rightVLayout->addWidget(fileType,22);
    rightVLayout->setContentsMargins(0,0,0,0);

    QWidget *rightVeiw = new QWidget;
    rightVeiw->setLayout(rightVLayout);


    QHBoxLayout *mainLayout = new QHBoxLayout;
    //    设置拉伸缩放时候
    mainLayout->addWidget(leftVeiw,3);
    mainLayout->addWidget(rightVeiw,2);
    // 设置静态比，初始化时侯，最小的，动画时候
//    mainLayout->setStretch(2,1);
    this->setLayout(mainLayout);
}

void HomeView::transTouched(){
    qDebug()<<"trans touched _____999999999_____";
//qDebug("size: ")<<tranBtn->geometry().width()<<tranBtn->geometry().height();


}
