#include <iostream>
#include "Power.hpp"
using namespace std;

int main() {
	Power a(3, 5), b;	//객체 생성
	a.show();
    b.show();

    b=a-2;		

	a.show();
    b.show();

	return 0;
}
