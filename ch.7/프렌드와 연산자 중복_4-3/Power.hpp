#ifndef _POWER_HPP_
#define _POWER_HPP_

class Power;
Power operator*(int x, Power a);
class Power{											//Complex클래스
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0);
	void show();
	friend Power operator* (int x, Power a);		//연산자 함수 선언
};	
#endif                                                                
