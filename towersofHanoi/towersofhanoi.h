#ifndef TOWERSOFHANOI_H
#define TOWERSOFHANOI_H
#include <iostream>
#include <QGraphicsScene>
#include <QDialog>
#include <string>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <QtGui>
#include <QtCore>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class TowersofHanoi; }
QT_END_NAMESPACE

class TowersofHanoi : public QDialog
{
    Q_OBJECT

public:
    TowersofHanoi(QWidget *parent = nullptr);
    ~TowersofHanoi();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QGraphicsScene* scene;
    Ui::TowersofHanoi *ui;
    int n = 0;
    QString source, auxiliary, destination;
    QGraphicsView *x;
    QGraphicsEllipseItem * elipse;
    QGraphicsLineItem* source1,*auxillary,*destination1;
};
#endif // TOWERSOFHANOI_H
