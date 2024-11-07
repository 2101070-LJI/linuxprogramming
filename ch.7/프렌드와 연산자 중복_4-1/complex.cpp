#include <iostream>
using namespace std;
#include "complex.hpp"

Complex::Complex(int real, int img){                    //생성자
    this->real = real; this->img = img; 
    cout<<"복소수 "<<real<<"+" <<img<<"j 생성"<<endl;   
}

Complex::Complex() : real(0), img(0) {}                 //기본 생성자

void Complex::show(){cout << real << " + " << img << "j" << endl;}  //멤버함수 정의

Complex& Complex::operator++(){   //연산잔 함수 정의
    real++;
    img++;
    return *this;
}

Complex Complex::operator--(int a){
    Complex tmp = *this;
    real--;
    img--;
    return tmp;
}