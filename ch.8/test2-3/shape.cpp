#include "shape.hpp"

// Shape 클래스 생성자 (기본 생성자)
Shape::Shape() : Shape(0, 0) {} // 기본 생성자는 다른 생성자를 호출하여 좌표 (0, 0)을 설정
// Shape 클래스 생성자 (x, y 좌표를 받는 생성자)
Shape::Shape(int x, int y) {
    this->x = x; // x 좌표 설정
    this->y = y; // y 좌표 설정
    cout << "Shape 생성"; // "Shape 생성" 출력
}
// Shape 클래스 소멸자
Shape::~Shape() {
    cout << ", Shape 소멸" << endl; // "Shape 소멸" 출력
}
// 좌표 출력 함수
void Shape::Show() {
    cout << "좌표 (" << x << "," << y << ")에 "; // 좌표 출력
}

// Circle 클래스 생성자 (기본 생성자)
Circle::Circle() : Circle(0, 0, 0) {} // 기본 생성자는 다른 생성자를 호출하여 좌표 (0, 0)과 반지름 0을 설정
// Circle 클래스 생성자 (x, y 좌표와 반지름을 받는 생성자)
Circle::Circle(int x, int y, int radius) : Shape(x, y) {
    this->radius = radius; // 반지름 설정
    cout << ", Circle 생성" << endl; // "Circle 생성" 출력
}
// Circle 클래스 소멸자
Circle::~Circle() {
    cout << "Circle 소멸"; // "Circle 소멸" 출력
}
// 원의 정보를 출력하는 함수
void Circle::show() {
    Show(); // 부모 클래스의 Show() 함수를 호출하여 좌표 출력
    cout << "반지름 " << radius << "인 원" << endl; // 반지름 출력
}

// Rect 클래스 생성자 (기본 생성자)
Rect::Rect() : Rect(0, 0, 0, 0) {} // 기본 생성자는 다른 생성자를 호출하여 좌표 (0, 0)과 폭, 높이 0을 설정
// Rect 클래스 생성자 (x, y 좌표와 폭, 높이를 받는 생성자)
Rect::Rect(int x, int y, int width, int height) : Shape(x, y) {
    this->width = width; // 폭 설정
    this->height = height; // 높이 설정
    cout << ", Rect 생성" << endl; // "Rect 생성" 출력
}
// Rect 클래스 소멸자
Rect::~Rect() {
    cout << "Rect 소멸"; // "Rect 소멸" 출력
}
// 직사각형의 정보를 출력하는 함수
void Rect::show() {
    Show(); // 부모 클래스의 Show() 함수를 호출하여 좌표 출력
    cout << "폭 " << width << ", 높이 " << height << "인 직사각형" << endl; // 폭과 높이 출력
}

// Triangle 클래스 생성자 (기본 생성자)
Triangle::Triangle() : Triangle(0, 0, 0, 0) {} // 기본 생성자는 다른 생성자를 호출하여 좌표 (0, 0)과 밑변, 높이 0을 설정
// Triangle 클래스 생성자 (x, y 좌표와 밑변, 높이를 받는 생성자)
Triangle::Triangle(int x, int y, int width, int height) : Shape(x, y) {
    this->width = width; // 밑변 설정
    this->height = height; // 높이 설정
    cout << ", Triangle 생성" << endl; // "Triangle 생성" 출력
}
// Triangle 클래스 소멸자
Triangle::~Triangle() {
    cout << "Triangle 소멸"; // "Triangle 소멸" 출력
}
// 삼각형의 정보를 출력하는 함수
void Triangle::show() {
    Show(); // 부모 클래스의 Show() 함수를 호출하여 좌표 출력
    cout << "밑변 " << width << ", 높이 " << height << "인 삼각형" << endl; // 밑변과 높이 출력
}
