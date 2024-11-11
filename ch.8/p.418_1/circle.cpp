#include "circle.hpp"

Circle::Circle(int radius){
    this->radius=radius;
}
void Circle::Show(){cout<<"반지름이 "<<radius<<"인 ";}


NamedCircle::NamedCircle(int radius, string name):Circle(radius){
    this->name=name;
}
void NamedCircle::show(){Show(); cout<<name<<endl;}
