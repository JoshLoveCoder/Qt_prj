#ifndef HOME_H
#define HOME_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QSizePolicy>
#include <QVBoxLayout>
#include "Cell/cell_a.h"
#include <QListWidget>
#include <QListWidgetItem>
#include "UI_files/form_b.h"
#include "UI_files/form_c.h"
#include <QDebug>



class Home : public QWidget
{
    Q_OBJECT
public:
    explicit Home(QWidget *parent = nullptr);
    QPushButton *btn;
    QWidget *blow1;
    QWidget *itemsList;
    QListWidget *msgDetails;


    void initData();
    void initUI();
    void initSetting();
    void initConnect();

signals:

public slots:
    void add();
    void del();
    void update();
    void query();

};

#endif // HOME_H
