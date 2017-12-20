#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "View/homeview.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    ui->setupUi(this);
    HomeView *homeView = new HomeView(this);
    this->setCentralWidget(homeView);
//    homeView->show();
    resize(600,370);
}

MainWindow::~MainWindow()
{
    delete ui;
}
