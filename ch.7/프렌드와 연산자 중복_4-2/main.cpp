#include <iostream>
#include "complex.hpp"
using namespace std;

int main() {
	Complex x(2, 3);	//객체 생성
	
	++x;	
	cout << "증가결과";
	x.show();					//멤버함수 호출

	x--;
	cout << "감소결과";
	x.show();					//멤버함수 호출

	return 0;
}
