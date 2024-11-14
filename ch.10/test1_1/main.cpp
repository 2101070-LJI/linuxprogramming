#include <iostream>        //iostream 라이브러리 포함
#include <string>          //string 라이브러리 포함
using namespace std;       //std 생략 

template <class T>          //템플릿 변수 선언 
T getmax(T x[], int n) {    //가장 큰 매개변수를 찾는 함수 정의
    T max = x[0];
    for (int i = 1; i < n; i++) {
        if (max < x[i]) max = x[i];
    }
    return max;
}

int main() {
    int a[5] = { -5, 10, 30, 20, 6 };        //int형 배열 선언 후 값 초기화
    double b[4] = { 3.14, 1.5, -6.0, 0.5 };  //double형 배열 선언 후 값 초기화
    char c[3] = { 'a', 'x', 'p' };           //char형 배열 선언 후 값 초기화
    
    cout << "정수배열의 최대값은" << getmax<int>(a,5) << endl;        
    cout << "실수배열의 최대값은" << getmax<double>(b,4) << endl;
    cout << "문자배열의 최대값은" << getmax<char>(c,3) << endl;
        return 0;
}

