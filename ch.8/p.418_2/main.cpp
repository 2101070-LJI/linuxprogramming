#include "circle.hpp"

int main() {
    NamedCircle pizza[5]; // NamedCircle 객체 배열 5개 생성
    int radius, max;
    string name;

    cout << " 5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << " >> "; 
        cin >> radius >> name; // 반지름과 이름을 입력받음
        pizza[i].setRadius(radius); // 반지름 설정
        pizza[i].setName(name); // 이름 설정
    }

    max = pizza[0].getRadius(); // 첫 번째 원의 반지름을 최대값으로 설정
    int count;
    for (int i = 0; i < 5; i++) {
        if (max < pizza[i].getRadius()) { // 가장 큰 반지름을 찾음
            max = pizza[i].getRadius(); // 최대 반지름 업데이트
            count = i; // 가장 큰 원의 인덱스 저장
        }
    }

    cout << "가장 면적이 큰 피자는 " << pizza[count].getName() << endl; // 면적이 큰 피자의 이름 출력

    return 0; // 프로그램 종료
}
