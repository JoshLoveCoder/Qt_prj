#ifndef HOMEVIEW_H
#define HOMEVIEW_H

#include <QWidget>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QToolButton>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QAudioRecorder>
#include <QMediaRecorder>


class HomeView : public QWidget
{

    Q_OBJECT
private:
     QAudioRecorder *audioRecorder;
public:
    explicit HomeView(QWidget *parent = nullptr);

signals:

private slots:
    void transTouched();
public slots:
};

#endif // HOMEVIEW_H
