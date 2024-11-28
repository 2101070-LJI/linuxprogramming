#include <iostream>
using namespace std;

int main(){
    int num[3][3]={{-5,2,35},{-20, 5, 100}, {-75, 5, -25}};     //2차원 배열 생성 후 초기화

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(num[i][j]>0) num[i][j]=255;      //0보다 크면 255로 변경
            else num[i][j]=0;                   //0보다 작으면 0으로 변경
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<num[i][j]<<"  ";              //2차원 배열 값 출력
        }
        cout<<endl;
    }
}