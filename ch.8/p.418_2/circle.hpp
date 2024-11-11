#ifndef _SHAPE_HPP_  // 중복 포함 방지
#define _SHAPE_HPP_
#include <iostream>
#include <string>
using namespace std;

// Circle 클래스 정의
class Circle {
    int radius; // 원의 반지름
public:
    Circle(int radius); // 생성자: 반지름을 설정
    void setRadius(int radius); // 반지름을 설정하는 함수
    int getRadius(); // 반지름을 반환하는 함수
    void Show(); // 반지름을 출력하는 함수
};

// NamedCircle 클래스 정의 (Circle 클래스를 상속)
class NamedCircle : public Circle {
    string name; // 원의 이름
public:
    NamedCircle(); // 생성자: 기본값을 설정
    void setName(string name); // 이름을 설정하는 함수
    string getName(); // 이름을 반환하는 함수
    void show(); // 원의 반지름과 이름을 출력하는 함수
};

#endif
