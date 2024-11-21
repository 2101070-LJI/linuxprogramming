#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a, max, min;
    vector<int> v;
    cout<<"정수 4개를 입력하시오: ";
    for(int i=0;i<4;i++){
        cin>>a;
        v.push_back(a);
        if(i==0){max=a;min=a;}
        if(max<a)max=a;
        if(min>a)min=a;
    }
    cout<<"최대값은 "<<max<<", 최소값은 "<<min<<"입니다."<<endl;
}