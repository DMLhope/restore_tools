#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QPushButton *restore_button;
    QPushButton * system_install_button;
    QVBoxLayout * all_layout;


protected:
    void resizeEvent(QResizeEvent *event);
};
#endif // WIDGET_H
