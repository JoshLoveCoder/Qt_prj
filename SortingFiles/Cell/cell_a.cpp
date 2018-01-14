#include "cell_a.h"



Cell_A::Cell_A(QWidget *parent) : QWidget(parent)
{
    initData();
    initUI();
    initSetting();
    initConnect();
}


void Cell_A::initData(){

}
void Cell_A::initUI(){
    vaIcon = new QLabel;
    vaIcon->setMinimumSize(60,60);
    vaIcon->setPixmap(QPixmap("/Image/a001.jpg"));

    QString a = "独立寒秋，湘江北去，橘子洲头。\
            看万山红遍，层林尽染；漫江碧透，百舸争流。\
            鹰击长空，鱼翔浅底，万类霜天竞自由。\
            怅寥廓，问苍茫大地，谁主沉浮？\
            携来百侣曾游。忆往昔峥嵘岁月稠。\
            恰同学少年，风华正茂；书生意气，挥斥方遒。\
            指点江山，激扬文字，粪土当年万户侯。\
            曾记否，到中流击水，浪遏飞舟？";
    contentText = new QPlainTextEdit(a);

    box = new QCheckBox;

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(vaIcon,1,Qt::AlignCenter);
    layout->addWidget(contentText,100,Qt::AlignCenter);
    layout->addWidget(box,1,Qt::AlignCenter);
    setLayout(layout);
}
void Cell_A::initSetting(){

}
void Cell_A::initConnect(){

}

