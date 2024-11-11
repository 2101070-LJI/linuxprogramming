#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_
#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius);
    void Show();
};

class NamedCircle:public Circle{
    string name;
public:
    NamedCircle(int radius, string name);
    void show();
};

#endif