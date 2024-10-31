#include <iostream>
#include "complex.hpp"
using namespace std;

int main() {
	Complex x(2, 3), y(-5, 10), sum;	//객체 생성
	sum = x+y;			

	cout << "두 복소수의 합은";
	sum.show();					//멤버함수 호출

	return 0;
}
