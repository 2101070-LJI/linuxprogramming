#include "circle.hpp"

// Circle 클래스 생성자 구현
Circle::Circle(int radius) {
    this->radius = radius; // 전달된 radius 값을 멤버 변수에 설정
}

// Circle 클래스의 Show 함수 구현
void Circle::Show() {
    cout << "반지름이 " << radius << "인 "; // 원의 반지름을 출력
}

// NamedCircle 클래스 생성자 구현 (Circle 클래스 상속)
NamedCircle::NamedCircle(int radius, string name) : Circle(radius) {
    this->name = name; // 전달된 이름을 멤버 변수에 설정
}

// NamedCircle 클래스의 show 함수 구현
void NamedCircle::show() {
    Show(); // 부모 클래스인 Circle의 Show 함수 호출
    cout << name << endl; // 원의 이름을 출력
}
