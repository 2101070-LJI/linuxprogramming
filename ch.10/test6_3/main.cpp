#include <iostream>
#include <algorithm>
using namespace std;
int main(){
vector<vector<int>> a={{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}};
int max=a.at(0).at(0);
int imax, jmax;

for(int i=0;i<a.size();i++){
    for(int j=0;j<a.at(i).size();j++){
        if(max<a.at(i).at(j)){
            max=a.at(i).at(j);
            imax=i; jmax=j;
        }
    }
}
cout<<"최대값은 "<<max<<endl;
cout<<"위치는 "<<imax+1<<"행 "<<jmax+1<<"열"<<endl;
}