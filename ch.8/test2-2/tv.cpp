#include "tv.hpp"

// TV 클래스 구현
TV::TV() { 
    size = 20; // 기본 스크린 크기를 20으로 설정
}
TV::TV(int size) { 
    this->size = size; // 주어진 크기로 스크린 크기를 설정
    cout << "TV 생성" << endl; // TV 생성 메시지 출력
}
void TV::setTV(int size) { 
    this->size = size; // 스크린 크기를 설정
}
int TV::getSize() { 
    return size; // 스크린 크기를 반환
}

// WideTV 클래스 구현
WideTV::WideTV(int size, bool videoIn) : TV(size) { 
    this->videoIn = videoIn; // 주어진 비디오 입력 가능 여부를 설정
    cout << "WideTV 생성" << endl; // WideTV 생성 메시지 출력
}
void WideTV::setWideTV(bool videoIn) { 
    this->videoIn = videoIn; // 비디오 입력 가능 여부를 설정
}
bool WideTV::getVideoIn() { 
    return videoIn; // 비디오 입력 가능 여부를 반환
}

// SmartTV 클래스 구현
SmartTV::SmartTV() : WideTV(20, false) { 
    cout << "SmartTV 생성" << endl; // 기본 생성자에서 SmartTV 생성 메시지 출력
}
SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true) { 
    this->ipAddr = ipAddr; // IP 주소를 설정
}
void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) { 
    setTV(size); // TV의 스크린 크기를 설정
    setWideTV(videoIn); // WideTV의 비디오 입력 가능 여부를 설정
    this->ipAddr = ipAddr; // IP 주소를 설정
}
string SmartTV::getIpAddr() { 
    return ipAddr; // IP 주소를 반환
}
