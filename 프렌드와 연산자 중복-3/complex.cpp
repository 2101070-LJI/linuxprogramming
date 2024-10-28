#include <iostream>
using namespace std;
#include "complex.hpp"

Complex::Complex(int real, int img){this->real = real; this->img = img;}    //생성자

Complex::Complex() : real(0), img(0) {}                                     //기본 생성자

void Complex::show(){cout << real << " + " << img << "j" << endl;}          //멤버함수 정의

Complex ComplexManager::ComplexAdd(Complex a, Complex b){                   //ComplexManager의 ComplexAdd 정의
    Complex c;
    c.real = a.real+b.real;
    c.img = a.img+b.img;
    return c;
}

Complex ComplexManager::ComplexSub(Complex a, Complex b){                   //ComplexManager의 ComplexSub 정의
    Complex c;
    c.real = a.real-b.real;
    c.img = a.img-b.img;
    return c;
}