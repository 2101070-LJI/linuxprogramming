#include <iostream>
using namespace std;

class grade{            //grade클래스
    int arr[3][3];      //2차원 배열 생성    
public:
    grade();            //기본 생성자
    void get_max();     //최우수학생을 찾는 멤버함수
};
grade::grade(){                                                  //기본 생성자
    for(int i=0;i<3;i++){
        cout<<i+1<<"번째 학생의 국어, 영어, 수학 성적을 입력: ";    //값을 입력받기 위한 도움말 출력
        for(int j=0;j<3;j++){
            cin>>arr[i][j];                                      //입력받은 값을 2차원 배열에 저장
        }
    }
}

void grade::get_max(){          //최우수학생을 찾는 멤버함수 정의
    int sum=0,max=0, imax;      

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];     //한 행에대한 열 값을 저장
        }
        if(max<sum/3){          //각 행의 값이 max보다 클 때 
            max=sum/3;          
            imax=i;             //인덱스 저장
        }
        sum=0;
    }
    cout<<"최우수 학생은 "<<imax+1<<"번째 학생이고 평균점수는 "<<max<<"점이다."<<endl;
}

int main(){
grade a;        //객체 생성
a.get_max();    //멤버함수 호출
}