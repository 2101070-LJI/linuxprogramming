#include <iostream>
#include <string>
#include <algorithm>        //알고리즘 함수를 사용하기위해 포함
using namespace std;

class Student{          //Student클래스
    string name;        //멤버변수
    int score;          //멤버변수
public:
    Student(string a, int b){       //생성자
        name=a;
        score=b;
    }

    friend bool operator< (Student a, Student b){       //<연산자 정의
        if (a.score<b.score)
            return true;
        else
            return false;    
    }

    string getname(){return name;}
    int getscore(){return score;}
};

int main(){
    string name;
    int score;
    
    vector<Student> st;             //Student클래스 벡터 생성
    vector<Student>::iterator it;   //벡터v의 원소에 대한 포인터it 선언

    for(int i=0;i<3;i++){
        cout<<"이름과 성적을 입력: ";
        cin>>name>>score;

        st.push_back(Student(name, score));     //키보드에서 읽은 문자열과 정수로 Student객체 생성 후 벡터에 삽입
    }

    it=max_element<vector<Student>::iterator>(st.begin(), st.end());    //컨테이너 객체의 원소들 중에서 지정한 범위에서 최대값의 주소를 저장한 iterator객체 리턴

    cout<<"최우수학생은 "<<endl;
    cout<< "이름: "<<it->getname()<<endl;
    cout<<"성적: "<<it->getscore()<<endl;
}
