#ifndef POINT_H
#define POINT_H


#include <iostream>
using namespace std;

class Point
{
    protected:
    int x,y;

    public:
    Point(int p_x=0, int p_y=0);
    virtual ~Point();
    int getx();
    int gety();
    void set_xy(int _x, int _y);


};
#endif // POINT_H
