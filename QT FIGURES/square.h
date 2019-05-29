#ifndef SQUARE_H
#define SQUARE_H

#include "Figure.h"
#include "Point.h"
#include <vector>

using namespace std;

class Square :	public Figure
{
protected:
    int side;
    Point * start = new Point();

public:
    Square(string pcolor, int pside=1,int px=0,int py=0);
    ~Square();
    void draw(QPainter * painter);
};
#endif // SQUARE_H
