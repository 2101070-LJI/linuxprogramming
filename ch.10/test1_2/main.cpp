#include <iostream>		//iostream 라이브러리 추가
using namespace std;		//std 생략

class Circle {		//circle클래스
	int radius;	//멤버 변수
public:
	Circle(int radius = 1) { this->radius = radius; }	//생성자
	int getRadius() { return radius; }			//반지름을 리턴하는 멤버 함수
	bool operator>(Circle& op) {				//>연산자 정의
		if (op.radius < this->radius)			
			return true;
		else return false;
	}
};
template <class T>		//템프릿 변수 선언
T bigger(T a, T b) { 		// 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;	//변수 선언
	c = bigger(a, b);	//함수 호출
	cout << "20과 50중 큰 값은" << c << endl;	
	Circle donut(10), pizza(20), y;		//객체 생성
	y = bigger(donut, pizza);		//함수 호출
	cout << "donut과 pizza중 큰 반지름은" << y.getRadius()<< endl;	
}
