#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "View/homeview.h"
#include "View/mainhomeframe.h"
#include "View/home.h"
#include <QMenuBar>
#include <QMenu>
#include "UI_files/form_a.h"
#include "UI_files/form_b.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    HomeView *homeView = new HomeView(this);
//    this->setCentralWidget(homeView);
//    setMinimumSize(600,370);
//    resize(600,370);

    QPalette p = palette();
    p.setColor(QPalette::Window, Qt::white);
    setPalette(p);

//    MainHomeFrame *home = new MainHomeFrame(this);
//    this->setCentralWidget(home);
//    setMinimumSize(800,440);

    Home *home = new Home(this);
    this->setCentralWidget(home);
    setMinimumSize(1080,600);
    setContentsMargins(0,0,0,0);
    QWidget *menu = new QWidget(this);
    menu->resize(50,1000);
    menu->setStyleSheet("backgroundcolor:red");
    setMenuWidget(menu);

//    Form_A *a = new Form_A;
//    setCentralWidget(a);
}

MainWindow::~MainWindow()
{
    delete ui;
}
