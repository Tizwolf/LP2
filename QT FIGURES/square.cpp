#include "figure.h"
#include "point.h"
#include <vector>
#include "square.h"

Square::Square(string pcolor, int pside, int px, int py):Figure(pcolor)
{
    color = pcolor;
    side = pside;
    start->set_xy(px, py);

}


Square::~Square()
{
    delete start;
}

void Square::draw(QPainter * painter)
{
    painter->drawRect(start->getx(),start->gety(),side,side);

}
