#include "widget.h"
#include "ui_widget.h"
uint32_t ui32_counter_button_Helloworld = 0;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_bt_Helloworld_clicked()
{
    ui32_counter_button_Helloworld++;
    if(ui32_counter_button_Helloworld%2==0)
    {
       ui->label->setText("Hello world ");
    }
    else
    {
        ui->label->clear();
    }
}
