#include <iostream>
#include <string>
#include <algorithm>        //알고리즘 함수를 사용하기위해 포함
using namespace std;

int main(){
    vector<string> st;              //문자열 벡터 생성
    vector<string>::iterator it;    //벡터v의 원소에 대한 포인터it 선언

    for(int i=0;i<5;i++){
        string name;
        cout<<"문자열을 입력하시오: ";
        cin>>name;

        st.push_back(name);         //키보드에서 읽은 문자열을 벡터에 삽입
    }
    sort<vector<string>::iterator>(st.begin(), st.end());       //컨테이너 객체의 원소들을 오름차순으로 정렬

    for(it=st.begin();it!=st.end();it++){
        cout<<*it<<endl;
    }
}
