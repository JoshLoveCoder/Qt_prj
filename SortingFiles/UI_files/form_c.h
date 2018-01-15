#ifndef FORM_C_H
#define FORM_C_H

#include <QWidget>

namespace Ui {
class Form_C;
}

class Form_C : public QWidget
{
    Q_OBJECT

public:
    explicit Form_C(QWidget *parent = 0);
    ~Form_C();

private:
    Ui::Form_C *ui;
};

#endif // FORM_C_H
