#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int>> a={{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}};      //2차원 배열 생성 및 초기화

    for(int i=0;i<a.size();i++){                        //행
        for(int j=0;j<a.at(i).size();j++){              //열
            if(a.at(i).at(j)>0) a.at(i).at(j)=255;      //0보다 크면 255로 변경
            else a.at(i).at(j)=0;                       //0보다 작으면 0으로 변경
        }
    }

    cout<<"수정행렬"<<endl;
    for(int i=0;i<a.size();i++){                //행
        for(int j=0;j<a.at(i).size();j++){      //열
            cout<<a.at(i).at(j)<<"  ";          //2차원 배열 출력
        }
        cout<<endl;
    }
}