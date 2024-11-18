#include <iostream>
using namespace std;
template <typename T>
class Container{
    T *data;
    int x;
public:
    Container(int i);
    ~Container();
    void set(int i, T a);
    T get(int i);
};

template <typename T>
Container<T>::Container(int i){ x=i; data=new T[i];}

template <typename T>
Container<T>::~Container(){delete []data;}

template <typename T>
void Container<T>::set(int i, T a){
    data[i]=a;
}

template <typename T>
T Container<T>::get(int i){
    return data[i];
}

int main() {
Container<char> c(26);
for (int i = 0; i < 26; i++)
c.set(i, 'a' + i);
for (int i = 25; i >= 0; i--)
cout << c.get(i);
cout << endl;
}
