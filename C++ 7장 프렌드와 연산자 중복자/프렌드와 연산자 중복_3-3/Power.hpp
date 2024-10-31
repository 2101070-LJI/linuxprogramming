#ifndef _POWER_HPP_
#define _POWER_HPP_

class Power{											//Complex클래스
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0);
	void show();
	Power operator- (int b);		//연산자 함수 선언
};	
#endif                                                                
