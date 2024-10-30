#include <iostream>
#include "complex.hpp"
using namespace std;

int main() {
	Complex x(5, 5), y(2, 2), sum, sub;     //객체 생성
    ComplexManager man;                     //객체 생성

	sum = man.ComplexAdd(x, y);             //멤버함수 호출
	cout << "두 복소수의 합은";
	sum.show();

    sub = man.ComplexSub(x, y);             //멤버함수 호출
	cout << "두 복소수의 차는";
	sub.show();

	return 0;
}