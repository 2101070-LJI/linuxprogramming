#include "circle.hpp"

Circle::Circle(int radius) {                    // 생성자
    this->radius = radius;
}

Circle::Circle() : radius(0) {}                 // 기본 생성자

void Circle::show() {
    cout << "radius = " << radius << " 인 원" << endl;
}

Circle& operator++(Circle& op) {   // 전위 증감 연산자 정의
    op.radius++;
    return op;
}

Circle operator++(Circle& op, int a) {   // 후위 증감 연산자 정의
    Circle tmp = op;
    op.radius++;
    return tmp;
}
