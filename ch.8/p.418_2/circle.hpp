#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_
#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius);
    void setRadius(int radius);
    int getRadius();
    void Show();
};

class NamedCircle:public Circle{
    string name;
public:
    NamedCircle();
    void setName(string name);
    string getName();
    void show();
};

#endif