#include <iostream>
using namespace std;

class twoarray{         //twoarray 클래스
    int arr[3][3];      //2차원 배열 
public:
    twoarray();         //기본 생성자
    void find_max();    //2차원 배열에서 가장 큰 값을 찾기 위한 멤버함수
};
twoarray::twoarray(){       //기본 생성자
    cout<<"2차원 배열(3*3)을 초기화하시오: ";   //2차원 배열 초기화
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
}

void twoarray::find_max(){      //2차원 배열에서 가장 큰 값을 찾기 위한 멤버함수
    int max=arr[0][0], imax, jmax;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){      //기존 최대 값보다 클 때
                max=arr[i][j];
                imax=i; jmax=j;     //인덱스 저장
            }
        }
    }
    cout<<"최대값은 "<<max<<endl;
    cout<<"위치는 "<<imax+1<<"행 "<<jmax+1<<"열"<<endl;
}

int main(){
twoarray x;     //객체 생성
x.find_max();   //멤버함수 호출
}