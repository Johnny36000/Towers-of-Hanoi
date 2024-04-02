#include "towersofhanoi.h"
#include "ui_towersofhanoi.h"

TowersofHanoi::TowersofHanoi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TowersofHanoi)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
       QBrush red(Qt::red);
       QBrush blue(Qt::blue);
       QPen blackpen(Qt::black);
               QBrush yellow(Qt::yellow);
       blackpen.setWidth(10);
    source1=scene->addLine(200, 0, 200, 250, blackpen);
     scene->addEllipse(100, 230, 200, 20, blackpen, blue);
    scene->addEllipse(110, 210, 180, 20, blackpen, red);
     scene->addEllipse(120, 190,160, 20, blackpen, yellow);
  auxillary=scene->addLine(400,0,400,250,blackpen);
  destination1=scene->addLine(600,0,600,250,blackpen);
  ui->lineEdit->setText("number of moves is: 0");
}

TowersofHanoi::~TowersofHanoi()
{
    delete ui;
}


void TowersofHanoi::on_pushButton_clicked()
{
    QBrush red(Qt::red);
    QBrush blue(Qt::blue);
    QBrush yellow(Qt::yellow);
    QPen blackpen(Qt::black);
    blackpen.setWidth(10);
   if (n == 0){
         scene->clear();
       source1=scene->addLine(200, 0, 200, 250, blackpen);
       scene->addEllipse(110, 210, 180, 20, blackpen, red);
     scene->addEllipse(100, 230, 200, 20, blackpen, blue);
       scene->addEllipse(520, 230,160, 20, blackpen, yellow);
       auxillary=scene->addLine(400,0,400,250,blackpen);
       destination1=scene->addLine(600,0,600,250,blackpen);
        ui->lineEdit->setText("number of moves is: 1");

  }
  else if (n == 1){
         scene->clear();
       source1=scene->addLine(200, 0, 200, 250, blackpen);
       scene->addEllipse(100, 230, 200, 20, blackpen, blue);
        scene->addEllipse(520, 230,160, 20, blackpen, yellow);
        scene->addEllipse(310, 230, 180, 20, blackpen, red);
        auxillary=scene->addLine(400,0,400,250,blackpen);
        destination1=scene->addLine(600,0,600,250,blackpen);
         ui->lineEdit->setText("number of moves is: 2");
  }
  else if(n == 2){
         scene->clear();
        scene->addEllipse(100, 230, 200, 20, blackpen, blue);
        scene->addEllipse(310, 230, 180, 20, blackpen, red);
        source1=scene->addLine(200, 0, 200, 250, blackpen);
         scene->addEllipse(320, 210,160, 20, blackpen, yellow);
         auxillary=scene->addLine(400,0,400,250,blackpen);
         destination1=scene->addLine(600,0,600,250,blackpen);
          ui->lineEdit->setText("number of moves is: 3");
   }
   else if(n==3){
         scene->clear();
       auxillary=scene->addLine(400,0,400,250,blackpen);
       destination1=scene->addLine(600,0,600,250,blackpen);
         source1=scene->addLine(200, 0, 200, 250, blackpen);
           scene->addEllipse(500, 230, 200, 20, blackpen, blue);
             scene->addEllipse(320, 210,160, 20, blackpen, yellow);
              scene->addEllipse(310, 230, 180, 20, blackpen, red);
               ui->lineEdit->setText("number of moves is: 4");
   }
   else if(n==4){
         scene->clear();
       auxillary=scene->addLine(400,0,400,250,blackpen);
       destination1=scene->addLine(600,0,600,250,blackpen);
         source1=scene->addLine(200, 0, 200, 250, blackpen);
           scene->addEllipse(500, 230, 200, 20, blackpen, blue);
              scene->addEllipse(310, 230, 180, 20, blackpen, red);
        scene->addEllipse(120, 230,160, 20, blackpen, yellow);
        ui->lineEdit->setText("number of moves is: 5");

   }
   else if(n==5){
         scene->clear();
       auxillary=scene->addLine(400,0,400,250,blackpen);
       destination1=scene->addLine(600,0,600,250,blackpen);
         source1=scene->addLine(200, 0, 200, 250, blackpen);
           scene->addEllipse(500, 230, 200, 20, blackpen, blue);
        scene->addEllipse(120, 230,160, 20, blackpen, yellow);
      scene->addEllipse(510, 210, 180, 20, blackpen, red);
       ui->lineEdit->setText("number of moves is: 6");
   }
   else if(n==6){
         scene->clear();
       auxillary=scene->addLine(400,0,400,250,blackpen);
       destination1=scene->addLine(600,0,600,250,blackpen);
         source1=scene->addLine(200, 0, 200, 250, blackpen);
           scene->addEllipse(500, 230, 200, 20, blackpen, blue);
              scene->addEllipse(510, 210, 180, 20, blackpen, red);
      scene->addEllipse(520, 190,160, 20, blackpen, yellow);
       ui->lineEdit->setText("number of moves is: 7");
   }

    n++;
}

void TowersofHanoi::on_pushButton_2_clicked()
{
    QBrush red(Qt::red);
    QBrush blue(Qt::blue);
    QBrush yellow(Qt::yellow);
    n = 0;
    scene->clear();
    QPen blackpen(Qt::black);
    blackpen.setWidth(10);
 source1=scene->addLine(200, 0, 200, 250, blackpen);
  scene->addEllipse(100, 230, 200, 20, blackpen, blue);
 scene->addEllipse(110, 210, 180, 20, blackpen, red);
  scene->addEllipse(120, 190,160, 20, blackpen, yellow);
auxillary=scene->addLine(400,0,400,250,blackpen);
destination1=scene->addLine(600,0,600,250,blackpen);
ui->lineEdit->setText("number of moves is: 0");
}
