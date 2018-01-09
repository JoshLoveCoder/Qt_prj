#ifndef HOME_H
#define HOME_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QSizePolicy>
#include <QVBoxLayout>



class Home : public QWidget
{
    Q_OBJECT
public:
    explicit Home(QWidget *parent = nullptr);
    QPushButton *btn;
    QWidget *blow1;
    QWidget *blow2;
    QWidget *blow3;
signals:

public slots:
};

#endif // HOME_H
