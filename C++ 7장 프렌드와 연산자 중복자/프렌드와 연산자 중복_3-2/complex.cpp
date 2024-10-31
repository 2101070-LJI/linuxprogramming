#include <iostream>
using namespace std;
#include "complex.hpp"

Complex::Complex(int real, int img){                    //생성자
    this->real = real; this->img = img; 
    cout<<"복소수 "<<real<<"+" <<img<<"j 생성"<<endl;   
}

Complex::Complex() : real(0), img(0) {}                 //기본 생성자

void Complex::show(){cout << real << " + " << img << "j" << endl;}  //멤버함수 정의

Complex Complex::operator*(Complex b){   //프렌드 함수 정의
    Complex temp;                  //객체 생성
    temp.real = this->real*b.real;     //값 초기화
    temp.img = this->img*b.img;        //값 초기화
    return temp;
}