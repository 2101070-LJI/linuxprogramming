#include "tv.hpp"

int main() {
    SmartTV htv; // SmartTV 객체 생성 (기본 생성자 호출)
    htv.setSmartTV(50, false, "192.0.0.2"); // 스크린 크기, 비디오 입력 가능 여부, IP 주소 설정

    // 설정된 값 출력
    cout << "size = " << htv.getSize() << endl; // 스크린 크기 출력
    cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl; // 비디오 입력 가능 여부 출력
    cout << "IP = " << htv.getIpAddr() << endl; // IP 주소 출력

    return 0;
}
