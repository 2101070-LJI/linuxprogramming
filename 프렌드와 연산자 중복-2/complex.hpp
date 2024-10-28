#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_
class Complex;

class ComplexManager{
public:
    Complex ComplexAdd(Complex a, Complex b);
};

class Complex{
	int real;
	int img;
public:
	Complex();
	Complex(int real, int img);
	void show();
	friend Complex ComplexManager::ComplexAdd(Complex a, Complex b);
};
#endif                                                                
