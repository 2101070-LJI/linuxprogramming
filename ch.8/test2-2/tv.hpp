#ifndef _TV_HPP_
#define _TV_HPP_

#include <iostream>
#include <string>
using namespace std;

// 기본 TV 클래스 선언
class TV {
    int size; // 스크린 크기
public:
    TV(); // 기본 생성자
    TV(int size); // 스크린 크기를 설정하는 생성자
    void setTV(int size); // 스크린 크기를 설정하는 함수
    int getSize(); // 스크린 크기를 반환하는 함수
};

// TV 클래스를 상속받는 WideTV 클래스 선언
class WideTV : public TV {
    bool videoIn; // 비디오 입력 가능 여부
public:
    WideTV(int size, bool videoIn); // 스크린 크기와 비디오 입력 가능 여부를 설정하는 생성자
    void setWideTV(bool videoIn); // 비디오 입력 가능 여부를 설정하는 함수
    bool getVideoIn(); // 비디오 입력 가능 여부를 반환하는 함수
};

// WideTV 클래스를 상속받는 SmartTV 클래스 선언
class SmartTV : public WideTV {
    string ipAddr; // IP 주소
public:
    SmartTV(); // 기본 생성자
    SmartTV(string ipAddr, int size); // IP 주소와 스크린 크기를 설정하는 생성자
    void setSmartTV(int size, bool videoIn, string ipAddr); // 모든 멤버 변수를 설정하는 함수
    string getIpAddr(); // IP 주소를 반환하는 함수
};

#endif
