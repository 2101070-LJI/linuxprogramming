#include <iostream>
using namespace std;

class twoarray{     //twoarray클래스
    int arr[2][2];  //2차원 배열 생성
public:
    twoarray operator+ (twoarray& a);   //+연산자
    void set();                         //2차원 배열 값 초기화
    void show();                        //2차원 배열 값 출력
};

twoarray twoarray::operator+(twoarray& a){      //+연산자 정의
    twoarray tmp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            tmp.arr[i][j]=a.arr[i][j]+this->arr[i][j];  //2차원 배열을 더한 값 tmp의 2차원 배열에 저장
        }
    }
    return tmp;
}

void twoarray::set(){                   //2차원 배열 값 초기화하는 멤버함수 정의
    cout<<"2차원 배열을 입력하시오: ";    //값 입력 받기
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];             //2차원 배열에 입력받은 값 저장
        }
    }
}
void twoarray::show(){                  //2차원 배열 값 출력하는 멤버함수 정의
    cout<<"연산결과:"<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<"  ";      //2차원 배열 값 출력
        }
        cout<<endl;                     //열 나누기
    }
}
int main(){
    twoarray a,b,sum;       //객체 생성
    a.set(); b.set();       //각 2차원 배열 초기화
    sum=a+b;                //+연산자 호출
    sum.show();             //2차원 배열 값 출력
}

