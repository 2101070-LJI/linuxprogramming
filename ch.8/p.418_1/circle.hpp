#ifndef _SHAPE_HPP_  // 중복 포함 방지
#define _SHAPE_HPP_
#include <iostream>
#include <string>
using namespace std;

// Circle 클래스 정의
class Circle {
    int radius; // 원의 반지름
public:
    Circle(int radius); // 생성자: 원의 반지름을 설정
    void Show(); // 원의 반지름을 출력하는 함수
};

// NamedCircle 클래스 정의 (Circle 클래스를 상속)
class NamedCircle : public Circle {
    string name; // 원의 이름
public:
    NamedCircle(int radius, string name); // 생성자: 반지름과 이름을 설정
    void show(); // 원의 반지름과 이름을 출력하는 함수
};

#endif
