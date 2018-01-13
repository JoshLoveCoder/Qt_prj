#ifndef FORM_A_H
#define FORM_A_H

#include <QWidget>

namespace Ui {
class Form_A;
}

class Form_A : public QWidget
{
    Q_OBJECT

public:
    explicit Form_A(QWidget *parent = 0);
    ~Form_A();

private:
    Ui::Form_A *ui;
};

#endif // FORM_A_H
