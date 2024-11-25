#include <iostream>
#include <string>
#include <algorithm>    //알고리즘 함수를 사용하기위해 포함
using namespace std;

int main(){
    vector<string> sv;              //문자열 벡터 생성
    vector<string>::iterator it;    //벡터sv의 원소에 대한 포인터it 선언

    for(int i=0;i<5;i++){
        string str;
        cout<<"문자열을 입력하세요: ";
        cin>>str;
        sv.push_back(str);          //키보드에서 읽은 문자열을 벡터에 삽입
    }

    it=max_element<vector<string>::iterator>(sv.begin(),sv.end());      //컨테이너 객체의 원소들 중에서 지정한 범위에서 최대값의 주소를 저장한 iterator객체 리턴
    cout<<"사전에서 제일 뒤에 나오는 단어는 "<<*it<<endl;
}