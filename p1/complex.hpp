#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_
class Complex;

Complex ComplexAdd(Complex a, Complex b);				//외부함수

class Complex{											//Complex클래스
	int real;
	int img;
public:
	Complex();
	Complex(int real, int img);
	void show();
	friend Complex ComplexAdd(Complex a, Complex b);	//프렌드 함수 선언
};
#endif                                                                
