#include "book.hpp"
using namespace std;

int main(void){
    Book a("청춘", 20000, 300);      //Book 클래스 a객체 생성
    string b;  // 문자열을 저장할 변수

    cout << "책 이름을 입력하세요>>";
    getline(cin, b);  // 문자열 입력

    if (b < a)
    cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!"<< endl;
    return 0;
}