#include <iostream>
using namespace std;

template <typename T1, typename T2>
class GClass{
    T1 x;
    T2 y;
public:
    void set(T1 a, T2 b);
    void get(T1& a, T2& b);
    void swap();
};

template <typename T1, typename T2>
void GClass<T1, T2>::set(T1 a, T2 b){x=a; y=b;}

template <typename T1, typename T2>
void GClass<T1, T2>::get(T1& a, T2& b){a=x; b=y;}

template <typename T1, typename T2>
void GClass<T1, T2>::swap(){
    T1 tmp=x;
    x = y;
    y=tmp;
}

int main() {
int a, b;
GClass<int, int> x;
x.set(2, 5);
x.get(a, b);
cout << "a=" << a << '\t' << "b=" << b << endl;
x.swap();
x.get(a, b);
cout << "a=" << a << '\t' << "b=" << b << endl;
double c, d;
GClass<double, double> y;
y.set(3.14, 6.28);
y.get(c, d);
cout << "c=" << c << '\t' << "d=" << d << endl;
y.swap( );
y.get(c, d);
cout << "c=" << c << '\t' << "d=" << d << endl;
}