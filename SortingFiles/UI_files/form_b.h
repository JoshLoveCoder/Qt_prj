#ifndef FORM_B_H
#define FORM_B_H

#include <QWidget>

namespace Ui {
class Form_B;
}

class Form_B : public QWidget
{
    Q_OBJECT

public:
    explicit Form_B(QWidget *parent = 0);
    ~Form_B();

private:
    Ui::Form_B *ui;
};

#endif // FORM_B_H
