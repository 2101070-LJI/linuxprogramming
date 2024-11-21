#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int a;
    string name;
    vector<string> v;

    for(int i=0;i<5;i++){
        cout<<"문자열을 입력하시오: ";
        getline(cin, name);
        v.push_back(name);
    }

    name = v.at(0); // 벡터의 첫 원소 sv[0]

    for (int i = 1; i < v.size(); i++) {
        if (name < v[i]) name = v[i]; // sv[i] -> sv.at(i)
    }
    cout << "사전에서 가장 뒤에 나오는 문자열은 " << name << endl;
}