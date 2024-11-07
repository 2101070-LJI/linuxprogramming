#include <iostream>
using namespace std;
#include "Power.hpp"

Power::Power(int kick, int punch){                    //생성자
    this->kick = kick; this->punch = punch; 
}

void Power::show(){cout<<"kick="<<kick<<",punch="<<punch<<endl;}  //멤버함수 정의

Power operator* (int x, Power a){   //-연산자 함수 정의
    Power temp;                  //객체 생성
    temp.kick = x*a.kick;     //값 초기화
    temp.punch = x*a.punch;        //값 초기화
    return temp;
}
