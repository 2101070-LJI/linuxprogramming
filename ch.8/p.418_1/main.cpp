#include "circle.hpp"

int main() {
    NamedCircle waffle(3, "waffle"); // 반지름 3, 이름 "waffle"인 NamedCircle 객체 생성
    waffle.show(); // 원의 반지름과 이름을 출력하는 show 함수 호출
    return 0; // 프로그램 종료
}
