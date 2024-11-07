#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

class Complex;			//Complex 선언

Complex& operator++(Complex& op);
Complex operator--(Complex& op, int a);

class Complex{											//Complex클래스
	int real;
	int img;
public:
	Complex();
	Complex(int real, int img);
	void show();
	friend Complex& operator++(Complex& op);	//연산자 함수 선언
	friend Complex operator--(Complex& op, int a);	//연산자 함수 선언
};
#endif                                                                
