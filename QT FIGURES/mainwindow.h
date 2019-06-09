#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QString>
#include <QPoint>
#include <QRectF>

#include <iostream>

#include "figure.h"
#include "point.h"
#include "circle.h"
#include "square.h"
#include "triangle.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_P_Circle_clicked();

    void on_P_Square_clicked();

    void on_P_Triangle_clicked();


private:

    void draw_circle(QPainter * painter);
    void draw_square(QPainter * painter);
    void draw_triangle(QPainter * painter);


private:
    Ui::MainWindow *ui;

    vector<Figure *> shapes;

    QPainter * painter;
    QPixmap * pixmap;
    QPen * pen;

};

#endif // MAINWINDOW_H
