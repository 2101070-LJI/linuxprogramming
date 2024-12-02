#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int>> a{{2, 4}, {5, -5}}, b{{-2, 3}, {0, -5}}, c;     //2차원 배열 생성

    for(int i=0;i<a.size();i++){        //2차원 배열(2*2) 더하기
        vector<int> d;                  //1차원 배열 생성
        for(int j=0;j<a.at(i).size();j++){
            d.push_back(a.at(i).at(j)+b.at(i).at(j));   //1차원 배열에 저장
        }
        c.push_back(d);     //더한 값을 저장한 1차원 배열을 2차원 배열을 대입
    }

    cout<<"연산결과:"<<endl;
    for(int i=0;i<a.size();i++){            //결과 출력
        for(int j=0;j<a.at(i).size();j++){
            cout<<c.at(i).at(j)<<"  ";
        }
        cout<<endl;
    }
}
