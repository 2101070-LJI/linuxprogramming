#ifndef _SHAPE_HPP_  // 헤더 파일 중복 포함을 방지
#define _SHAPE_HPP_
#include <iostream>
using namespace std;

// Shape 클래스 정의
class Shape {
    int x, y; // 좌표
public:
    Shape(); // 기본 생성자
    Shape(int x, int y); // x, y 좌표를 받는 생성자
    ~Shape(); // 소멸자
    void Show(); // 좌표 출력 함수
};

// Circle 클래스 정의 (Shape 클래스를 상속받음)
class Circle : public Shape {
    int radius; // 반지름
public:
    Circle(); // 기본 생성자
    Circle(int x, int y, int radius); // x, y 좌표와 반지름을 받는 생성자
    ~Circle(); // 소멸자
    void show(); // 원의 정보를 출력하는 함수
};

// Rect 클래스 정의 (Shape 클래스를 상속받음)
class Rect : public Shape {
    int width, height; // 폭과 높이
public:
    Rect(); // 기본 생성자
    Rect(int x, int y, int width, int height); // x, y 좌표와 폭, 높이를 받는 생성자
    ~Rect(); // 소멸자
    void show(); // 직사각형의 정보를 출력하는 함수
};

// Triangle 클래스 정의 (Shape 클래스를 상속받음)
class Triangle : public Shape {
    int width, height; // 밑변과 높이
public:
    Triangle(); // 기본 생성자
    Triangle(int x, int y, int width, int height); // x, y 좌표와 밑변, 높이를 받는 생성자
    ~Triangle(); // 소멸자
    void show(); // 삼각형의 정보를 출력하는 함수
};

#endif
