#include <iostream>
using namespace std;
#include "complex.hpp"

Complex::Complex(int real, int img){                    //생성자
    this->real = real; this->img = img; 
    cout<<"복소수 "<<real<<"+" <<img<<"j 생성"<<endl;   
}

Complex::Complex() : real(0), img(0) {}                 //기본 생성자

void Complex::show(){cout << real << " + " << img << "j" << endl;}  //멤버함수 정의

Complex& operator++(Complex& op){   //연산잔 함수 정의
    op.real++;
    op.img++;
    return op;
}

Complex operator--(Complex& op, int a){
    Complex tmp = op;
    op.real--;
    op.img--;
    return tmp;
}