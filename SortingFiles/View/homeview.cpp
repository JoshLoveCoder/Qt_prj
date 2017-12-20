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
    sp.setVerticalStretch(1);
    sp.setVerticalPolicy(QSizePolicy::Minimum);
    logView->setSizePolicy(sp);

    QVBoxLayout *leftVBLayout = new QVBoxLayout;
    leftVBLayout->addWidget(tranBtn);
    leftVBLayout->addWidget(logView);
    leftVBLayout->setStretch(0,1);
    leftVBLayout->setStretch(1,1);
    QWidget *leftVeiw = new QWidget;
    leftVeiw->setLayout(leftVBLayout);


    QToolButton *toolBtn1 = new QToolButton();
    QPlainTextEdit *ptext1 = new QPlainTextEdit("source1");
    ptext1->setMinimumHeight(55);
    sp = ptext1->sizePolicy();
    sp.setVerticalStretch(0);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    ptext1->setSizePolicy(sp);

    QHBoxLayout *vbl1 = new QHBoxLayout;
    vbl1->addWidget(toolBtn1);
    vbl1->addWidget(ptext1);
    QWidget *a1 = new QWidget;
    a1->setLayout(vbl1);

    QToolButton *toolBtn2 = new QToolButton();
    QPlainTextEdit *ptext2 = new QPlainTextEdit("source2");
    ptext2->setMinimumHeight(55);
    sp = ptext2->sizePolicy();
    sp.setVerticalStretch(0);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    ptext2->setSizePolicy(sp);

    QHBoxLayout *vbl2 = new QHBoxLayout;
    vbl2->addWidget(toolBtn2);
    vbl2->addWidget(ptext2);
    QWidget *a2 = new QWidget;
    a2->setLayout(vbl2);

    QPlainTextEdit *fileType = new QPlainTextEdit;

    QVBoxLayout *rightVLayout = new QVBoxLayout;
    rightVLayout->addWidget(a1,1);
    rightVLayout->addWidget(a2,1);
    rightVLayout->addWidget(fileType,5);

    QWidget *rightVeiw = new QWidget;
    rightVeiw->setLayout(rightVLayout);


    QHBoxLayout *mainLayout = new QHBoxLayout;
//    设置拉伸缩放时候
    mainLayout->addWidget(leftVeiw,1);
    mainLayout->addWidget(rightVeiw,1);
    // 设置静态比，初始化时侯，最小的，动画时候
    mainLayout->setStretch(1,1);
    this->setLayout(mainLayout);
}
