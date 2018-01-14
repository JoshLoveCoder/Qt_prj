#ifndef CELL_A_H
#define CELL_A_H

#include <QObject>
#include <QWidget>
#include <QPlainTextEdit>
#include <QLabel>
#include <QPushButton>
#include <QCheckBox>
#include <QHBoxLayout>



class Cell_A : public QWidget
{
    Q_OBJECT
public:
    explicit Cell_A(QWidget *parent = nullptr);
    QLabel *vaIcon;
    QPlainTextEdit *contentText;
    QCheckBox *box;
private:
    void initData();
    void initUI();
    void initSetting();
    void initConnect();

signals:

public slots:
};

#endif // CELL_A_H
