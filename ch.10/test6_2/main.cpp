#include <iostream>
#include <algorithm>
using namespace std;

class grade{        //grade 클래스
    vector<vector<int>> a;      //2차원 배열 생성
public:
    grade();                    //기본 생성자
    void result();              //멤버함수
};

grade::grade(){     //2차원 배열 값 초기화
    for(int i=0;i<3;i++){
        cout<<i+1<<"번째 학생의 국어, 영어, 수학 성적을 입력: ";
        vector<int> x;      //1차원 배열 생성
        int y;
        for(int i=0;i<3;i++){
            cin>>y;
            x.push_back(y);
        }
        a.push_back(x);     //1차원 배열을 2차원 배열에 저장
    }
}
void grade::result(){       //평균값을 계산후 가장 큰 평균 값 출력
    int sum=0,max=0, imax;      

    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.at(i).size();j++){
            sum+=a.at(i).at(j);     //한 행에대한 열 값을 저장
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
    grade a;
    a.result();

}