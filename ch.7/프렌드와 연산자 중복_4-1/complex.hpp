#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

class Complex;			//Complex 선언

class Complex{											//Complex클래스
	int real;
	int img;
public:
	Complex();
	Complex(int real, int img);
	void show();
	Complex& operator++();	//연산자 함수 선언
	Complex operator--(int a);	//연산자 함수 선언
};
#endif                                                                
