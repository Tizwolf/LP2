#ifndef CIRCLE_H
#define CIRCLE_H


#include "figure.h"
#include "point.h"
class Circle : public Figure
{
protected:
    int radio;
    Point * center = new Point();

public:
    Circle(string pcolor, int pradio=1, int px=0, int py=0);
    void draw(QPainter * painter);
    Point * getCenter();
    ~Circle();
};
#endif // CIRCLE_H
