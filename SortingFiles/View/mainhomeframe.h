#ifndef MAINHOMEFRAME_H
#define MAINHOMEFRAME_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSizePolicy>
#include <QPlainTextEdit>


class MainHomeFrame : public QWidget
{
    Q_OBJECT
public:
    explicit MainHomeFrame(QWidget *parent = nullptr);

private:
    QWidget *homeMenu;
    QWidget *contentView;
signals:

public slots:
};

#endif // MAINHOMEFRAME_H
