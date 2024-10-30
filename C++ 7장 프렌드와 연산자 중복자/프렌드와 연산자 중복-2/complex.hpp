#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

class Complex;		//Complex 클래스 선언

class ComplexManager{							//ComplexManager 클래스
public:
    Complex ComplexAdd(Complex a, Complex b);	//멤버함수 선언
};

class Complex{															//Complex 클래스
	int real;
	int img;
public:
	Complex();
	Complex(int real, int img);
	void show();
	friend Complex ComplexManager::ComplexAdd(Complex a, Complex b);	//다른 클래스의 멤버함수를 프렌드로 선언
};
#endif                                                                
