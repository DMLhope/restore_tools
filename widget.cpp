#include "widget.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QDebug>
#include <QIcon>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    restore_button = new QPushButton;
    restore_button->setText("Restore System");
    restore_button->setStyleSheet("text-align:left;font-size:15pt;");
    restore_button->setIcon(QIcon("/home/uos/restore_tools/img/restore_512.svg"));
    restore_button->setIconSize(QSize(80,80));

    system_install_button = new QPushButton;
//    system_install_button->setStyleSheet("text-align:left;font-size:15pt;");
    system_install_button->setText("Install System");
    system_install_button->setIcon(QIcon("/home/uos/restore_tools/img/restore_512.png"));
    system_install_button->setIconSize(QSize(64,64));

    all_layout =new QVBoxLayout;
    all_layout->setAlignment(Qt::AlignCenter);
    all_layout->setDirection(QBoxLayout::TopToBottom);
    all_layout->addStretch(3);
    all_layout->addWidget(restore_button);
    all_layout->addStretch(1);
    all_layout->addWidget(system_install_button);
    all_layout->addStretch(3);

    this->setLayout(all_layout);
//    setFixedSize(1024,768);
    setFixedSize(1920,1080);
//    this->setMinimumSize(800,600);
}

Widget::~Widget()
{


}

void Widget::resizeEvent(QResizeEvent *event)
{
    QRect rect = this->rect();

//    if (rect.width() > 200)
//        restore_button->setFixedSize(100, 100);
//    else
//        restore_button->setFixedSize(50, 50);
    if (rect.width() >= 800){
        restore_button->setFixedSize(rect.width()/10*3,rect.height()/12);
        system_install_button->setFixedSize(rect.width()/10*3,rect.height()/12);
//        qDebug()<<"\n=====\n"<<rect.width();
//        qDebug()<<rect.height()<<"\n=====\n";
    }else {
        restore_button->setFixedSize(300, 100);
        system_install_button->setFixedSize(300, 100);
//        qDebug()<<"\n no auto size=====\n"<<rect.width();
//        qDebug()<<rect.height()<<"\n=====\n";
    }
    /// undo
    QWidget::resizeEvent(event);
}

