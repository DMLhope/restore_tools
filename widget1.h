#ifndef WIDGET1_H
#define WIDGET1_H




#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QAbstractButton>

class Widget1 : public QWidget
{
    Q_OBJECT

public:
    Widget1(QWidget *parent = nullptr);
    ~Widget1();

    QVBoxLayout * select_disk_layout;
    QVBoxLayout * select_imgfile_layout;
    QVBoxLayout * select_target_layout;
    QLabel * select_disk_lb;
    QLabel * select_imgfile_lb;
    QLabel * select_target_lb;
    //QPushButton *restore_button;
    //QPushButton * system_install_button;

    QAbstractButton * select_disk_button;
    QAbstractButton * select_target_button;
protected:
    void resizeEvent(QResizeEvent *event);


};
#endif // WIDGET1_H
