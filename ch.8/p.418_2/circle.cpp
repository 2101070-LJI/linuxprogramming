#include "circle.hpp"


Circle::Circle(int radius){
    this->radius=radius;
}
void Circle::setRadius(int radius){this->radius=radius;}
int Circle::getRadius(){return radius;}
void Circle::Show(){cout<<"반지름이 "<<radius<<"인 ";}


NamedCircle::NamedCircle():Circle(0){name=" ";}
void NamedCircle::setName(string name){this->name=name;}
string NamedCircle::getName(){return name;}
void NamedCircle::show(){Show(); cout<<name<<endl;}
