#include "widget1.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QAbstractButton>
#include <QDebug>
#include <stdio.h>

//QLabel lab1("Label1"); // 50,50
//// 1024 768
//// 1920 1080
///
//QVBoxLayout * select_disk_layout;
//QVBoxLayout * select_imgfile_layout;
//QVBoxLayout * select_target_layout;
//QLabel * select_disk_lb;
//QLabel * select_imgfile_lb;
//QLabel * select_target_lb;
//QPushButton *restore_button;
//QPushButton * system_install_button;

//QAbstractButton * select_disk_button;
//QAbstractButton * select_target_button;

Widget1::Widget1(QWidget *parent)
    : QWidget(parent)
{
//    QVBoxLayout *layout=new QVBoxLayout(this);
//    layout->setDirection(QBoxLayout::BottomToTop);
//    QLabel lab1("Label1");
//    lab1.setStyleSheet("QLabel{background:#dddddd;font:20px;}");
//    lab1.setAlignment(Qt::AlignCenter);
//    QLabel lab2("Label2");
//    lab2.setStyleSheet("QLabel{background:#cccccc;font:20px;}");
//    lab2.setAlignment(Qt::AlignCenter);

    // select disk
    select_disk_lb = new QLabel;
    select_disk_lb->setText("Select Disk");
    select_disk_lb->setAlignment(Qt::AlignCenter);

    select_disk_button =new QPushButton;
    select_disk_button->setText("Select Disk");

    select_disk_layout = new QVBoxLayout;
    select_disk_layout->setAlignment(Qt::AlignCenter);
    select_disk_layout->addWidget(select_disk_lb);
    select_disk_layout->addWidget(select_disk_button);

    // select imgfile
    select_imgfile_lb = new QLabel;
    select_imgfile_lb->setText("Select Img File");
    select_imgfile_lb->setAlignment(Qt::AlignCenter);

    select_imgfile_layout = new QVBoxLayout;
    select_imgfile_layout->setAlignment(Qt::AlignCenter);
    select_imgfile_layout->addWidget(select_imgfile_lb);

    // select target disk
    select_target_lb = new QLabel;
    select_target_lb->setText("Select Target Disk");
    select_target_lb->setAlignment(Qt::AlignCenter);

    select_target_button =new QPushButton;
    select_target_button->setText("Select Target Disk");

    select_target_layout = new QVBoxLayout;
    select_target_layout->setAlignment(Qt::AlignCenter);
    select_target_layout->addWidget(select_target_lb);
    select_target_layout->addWidget(select_target_button);



    QHBoxLayout *layout=new QHBoxLayout;
    layout->setAlignment(Qt::AlignCenter);
    layout->setDirection(QBoxLayout::LeftToRight);
    layout->addStretch(1);
    layout->addLayout(select_disk_layout);
    layout->addStretch(1);
    layout->addLayout(select_imgfile_layout);
    layout->addStretch(1);
    layout->addLayout(select_target_layout);
    layout->addStretch(1);

    this->setStyleSheet("border-image:url()");
    this->setLayout(layout);
//    setFixedSize(1024,768);
    setFixedSize(1920,1080);
//    this->setMinimumSize(800,600);
}

Widget1::~Widget1()
{


}

void Widget1::resizeEvent(QResizeEvent *event)
{
    QRect rect = this->rect();


//    if (rect.width() > 200)
//        restore_button->setFixedSize(100, 100);
//    else
//        restore_button->setFixedSize(50, 50);
//    if (rect.width() >= 800){
//        restore_button->setFixedSize(rect.width()/10*3,rect.height()/12);
//        system_install_button->setFixedSize(rect.width()/10*3,rect.height()/12);
////        qDebug()<<"\n=====\n"<<rect.width();
////        qDebug()<<rect.height()<<"\n=====\n";
//    }else {
//        restore_button->setFixedSize(300, 100);
//        system_install_button->setFixedSize(300, 100);
//        qDebug()<<"\n no auto size=====\n"<<rect.width();
//        qDebug()<<rect.height()<<"\n=====\n";
//    }
    /// undo
    QWidget::resizeEvent(event);
}

void run_shell(){

}


