#include <iostream>
using namespace std;

template <typename T1, typename T2>     //템플릿 클래스 선언 

class GClass{       //GClass 선언
    T1 x;       //멤버 변수        
    T2 y;       //멤버 변수
public:
    void set(T1 a, T2 b);       //멤버 함수
    void get(T1& a, T2& b);     //멤버 함수
    void swap();                //멤버 함수
};

template <typename T1, typename T2>                 //템플릿 클래스 정의
void GClass<T1, T2>::set(T1 a, T2 b){x=a; y=b;}     //멤버 변수 초기화

template <typename T1, typename T2>                 //템플릿 클래스 정의
void GClass<T1, T2>::get(T1& a, T2& b){a=x; b=y;}   //참조를 통해 값 전달

template <typename T1, typename T2>                 //템플릿 클래스 정의
void GClass<T1, T2>::swap(){                        //swap함수
    T1 tmp=x;
    x = y;
    y=tmp;
}

int main() {
int a, b;   
GClass<int, int> x; //템플릿 클래스 호출
x.set(2, 5);        //초기화
x.get(a, b);        
cout << "a=" << a << '\t' << "b=" << b << endl;

x.swap();           //swap함수
x.get(a, b);
cout << "a=" << a << '\t' << "b=" << b << endl;

double c, d;
GClass<double, double> y;   //템플릿 클래스 호출

y.set(3.14, 6.28);  //초기화
y.get(c, d);
cout << "c=" << c << '\t' << "d=" << d << endl;

y.swap( );          //swap함수 
y.get(c, d);
cout << "c=" << c << '\t' << "d=" << d << endl;
}
