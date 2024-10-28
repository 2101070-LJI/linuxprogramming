#include <iostream>
using namespace std;
#include "complex.hpp"

Complex::Complex(int real, int img){
    this->real = real; this->img = img;
    cout<<"복소수 "<<real<<"+" <<img<<"j 생성"<<endl;
    }
Complex::Complex() : real(0), img(0) {}

void Complex::show(){cout << real << " + " << img << "j" << endl;}

Complex ComplexManager::ComplexAdd(Complex a, Complex b){
    Complex c;
    c.real = a.real+b.real;
    c.img = a.img+b.img;
    return c;
}