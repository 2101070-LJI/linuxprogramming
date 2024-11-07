#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_
#include <iostream>
using namespace std;

class Shape{
    int x,y;

public:
    void setPoint(int x, int y);
    void Show();
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