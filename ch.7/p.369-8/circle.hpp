#ifndef _CIRCLE_HPP_
#define _CIRCLE_HPP_
#include <iostream> 
using namespace std;

class Circle;

Circle& operator++(Circle& op); // 전위 연산자
Circle operator++(Circle& op, int a); // 후위 연산자

class Circle {
    int radius;
public:
    Circle();
    Circle(int radius);
    void show();
    friend Circle& operator++(Circle& op); // 전위 연산자
    friend Circle operator++(Circle& op, int a); // 후위 연산자
};
#endif
