#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "View/homeview.h"
#include "View/mainhomeframe.h"
#include "View/home.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    HomeView *homeView = new HomeView(this);
    this->setCentralWidget(homeView);
    setMinimumSize(600,370);
    resize(600,370);

    QPalette p = palette();
    p.setColor(QPalette::Window, Qt::lightGray);
    setPalette(p);

//    MainHomeFrame *home = new MainHomeFrame(this);
//    this->setCentralWidget(home);
//    setMinimumSize(800,440);

//    Home *home = new Home(this);
//    this->setCentralWidget(home);
//    setMinimumSize(1080,600);
//    setContentsMargins(0,0,0,0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
