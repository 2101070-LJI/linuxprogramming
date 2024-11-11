#include "shape.hpp"

int main() {
    Circle x(0, 0, 2); // Circle 객체 x 생성
    Rect y(1, 1, 5, 10); // Rect 객체 y 생성
    Triangle z(2, 2, 5, 10); // Triangle 객체 z 생성

    x.show(); // Circle 객체의 show() 호출
    y.show(); // Rect 객체의 show() 호출
    z.show(); // Triangle 객체의 show() 호출

    return 0; // 프로그램 종료
}
