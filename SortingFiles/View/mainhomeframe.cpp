#include "mainhomeframe.h"

MainHomeFrame::MainHomeFrame(QWidget *parent) : QWidget(parent)
{
    QPalette p = palette();
    p.setColor(QPalette::Window, Qt::red);
    setPalette(p);

    //init Home layout
    QSizePolicy sp;

    homeMenu = new QFrame(this);
    homeMenu->setObjectName("Menu");
    homeMenu->setPalette(p);
    homeMenu->setMinimumHeight(60);
    homeMenu->setFixedHeight(60);

    sp = homeMenu->sizePolicy();
    sp.setVerticalStretch(1);
    sp.setVerticalPolicy(QSizePolicy::Fixed);
    homeMenu->setSizePolicy(sp);

    contentView = new QFrame(this);
    sp = contentView->sizePolicy();
    sp.setVerticalStretch(1);
    sp.setVerticalPolicy(QSizePolicy::Expanding);
    contentView->setSizePolicy(sp);

    QVBoxLayout *homeLayout = new QVBoxLayout(this);
    homeLayout->addWidget(homeMenu);
    homeLayout->addWidget(contentView);
    homeLayout->setStretch(1,1);
    homeLayout->setStretch(0,3);
    this->setLayout(homeLayout);
}
