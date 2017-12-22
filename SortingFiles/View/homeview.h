#ifndef HOMEVIEW_H
#define HOMEVIEW_H

#include <QWidget>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QToolButton>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>



class HomeView : public QWidget
{

    Q_OBJECT
private:

public:
    explicit HomeView(QWidget *parent = nullptr);

signals:

private slots:
    void transTouched();
public slots:
};

#endif // HOMEVIEW_H
