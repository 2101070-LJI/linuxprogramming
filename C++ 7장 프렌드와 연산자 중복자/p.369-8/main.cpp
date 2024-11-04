#include "circle.hpp"

int main() {
    Circle a(5), b(4); // 객체 생성

    ++a; // 전위 연산자 호출
    b = a++; // 후위 연산자 호출
    a.show(); // 멤버 함수 호출
    b.show();

    return 0;
}
