#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_
#include <iostream>
using namespace std;

class Shape{
protected:
    int x,y;
};

class Circle : public Shape{
    int radius;

public:
    void setCircle(int x, int y, int radius);
    void show();
};

class Rect : public Shape{
    int width, height;

public:
    void setRect(int x, int y, int width, int height);
    void show();
};

class Triangle : public Shape{
    int width, height;

public:
    void setTriangle(int x, int y, int width, int height);
    void show();
};
#endif