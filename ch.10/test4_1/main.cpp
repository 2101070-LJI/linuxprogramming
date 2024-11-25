#include <iostream>
#include <algorithm>        //알고리즘 함수를 사용하기위해 포함
using namespace std;

int main(){
    vector<int> v;                  //정수 벡터 생성
    vector<int>::iterator it;       //벡터v의 원소에 대한 포인터it 선언

    cout<<"정수 4개를 입력하시오: ";
    for(int i=0;i<4;i++){   //입력받은 값을 정수 벡터에 삽입
        int x;
        cin>>x;
        v.push_back(x);     
    }

    it=max_element<vector<int>::iterator>(v.begin(), v.end());          //컨테이너 객체의 원소들 중에서 지정한 범위에서 최대값의 주소를 저장한 iterator객체 리턴
    cout<<"최대값은 "<<distance(v.begin(), it)<<"번째 값"<<*it<<endl;    //distance()를 사용하여 인덱스 값 출력

    it=min_element<vector<int>::iterator>(v.begin(), v.end());          //컨테이너 객체의 원소들 중에서 지정한 범위에서 최소값의 주소를 저장한 iterator객체 리턴
    cout<<"최소값은 "<<distance(v.begin(), it)<<"번째 값"<<*it<<endl;    //distance()를 사용하여 인덱스 값 출력

    sort(v.begin(),v.end());                //컨테이너 객체의 원소들을 오름차순으로 정렬
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;

    sort(v.begin(),v.end(), std::greater<int> ());  //컨테이너 객체의 원소들을 내림차순으로 정렬
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
}