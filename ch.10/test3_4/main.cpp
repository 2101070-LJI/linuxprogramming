#include <iostream>
#include <vector>       //헤더파일 포함
using namespace std;

int main(){
    int x;
    vector<int> v;              //정수 벡터 생성
    vector<int>::iterator it;   // 벡터v의 원소에 대한 포인터it 선언

    cout<<"숫자를 입력하시오: ";
    for(int i=0;i<5;i++){
        cin>>x;             //입력받은 값 저장
        v.push_back(x);     //벡터에 입력받은 값 삽입
    }

    cout<<"초기 벡터 원소: ";
    for(it = v.begin();it!=v.end();it++){   //벡터의 모든 원소 출력
        cout<<*it<<" ";                     
    }
    cout<<endl;

    for(it=v.begin();it!=v.end();){         //벡터의 음수 값 삭제
        if(*it<0)it=v.erase(it);            //값을 삭제 후 빈자리를 채움
        else it++;
    }

    cout<<"음수를 삭제 후 벡터원소: ";
    for(it = v.begin();it!=v.end();it++){   //벡터의 모든 원소 출력
        cout<<*it<<" ";
    }
    cout<<endl;

    int sum=0;                              //평균값을 출력하기 위한 변수 선언
    for(it = v.begin();it!=v.end();it++){   //벡터의 모든 원소 값 더하기
        sum+=*it;
    }
    cout<<"평균값: "<<sum/v.size()*1.0<<endl;
}