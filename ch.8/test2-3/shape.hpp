#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_
#include <iostream>
using namespace std;

class Shape{
    int x,y;
public:
    Shape();
    Shape(int x, int y);
    ~Shape();
    void Show();
};

class Circle : public Shape{
    int radius;

public:
    Circle();
    Circle(int x, int y, int radius);
    ~Circle();
    void show();
};

class Rect : public Shape{
    int width, height;

public:
    Rect();
    Rect(int x, int y, int width, int height);
    ~Rect();
    void show();
};

class Triangle : public Shape{
    int width, height;

public:
    Triangle();
    Triangle(int x, int y, int width, int height);
    ~Triangle();
    void show();
};
#endif