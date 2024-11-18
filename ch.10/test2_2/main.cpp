#include <iostream>
using namespace std;
template <typename T>       //템플릿 클래스 선언

class Container{    //Container 클래스
    T *data;        //동적 할당을 위한 선언
    int x;          //인덱스 값 저장
public:
    Container(int i);   //생성자
    ~Container();       //소멸자
    void set(int i, T a);   //해당 인덱스 값 초기화
    T get(int i);           //해당 인덱스 배열 값 리턴
};

template <typename T>                                   //템플릿 클래스 구현 
Container<T>::Container(int i){ x=i; data=new T[i];}    //동적 할당 

template <typename T>                              //템플릿 클래스 구현
Container<T>::~Container(){delete []data;}          //동적할당 해제

template <typename T>                   //템플릿 클래스 구현 
void Container<T>::set(int i, T a){     //멤버함수 정의
    data[i]=a;
}

template <typename T>           //템플릿 클래스 구현 
T Container<T>::get(int i){     //멤버함수 정의
    return data[i];
}

int main() {            
Container<char> c(26);  //char로 인덱스가 26인 클래스 생성

for (int i = 0; i < 26; i++)    //값 대입
    c.set(i, 'a' + i);

for (int i = 25; i >= 0; i--)   //값 출력
cout << c.get(i);

cout << endl;
}
