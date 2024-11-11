#include "shape.hpp"

Shape::Shape():Shape(0,0){}
Shape::Shape(int x, int y){this->x=x; this->y=y; cout<<"Shape 생성";}
Shape::~Shape(){cout<<", Shape 소멸"<<endl;}
void Shape::Show(){cout<<"좌표 ("<<x<<","<<y<<")에 ";}


Circle::Circle():Circle(0,0,0){}
Circle::Circle(int x, int y, int radius):Shape(x,y){
    this->radius=radius;
    cout<<", Circle 생성"<<endl;}
Circle::~Circle(){cout<<"Cirlce 소멸";}
void Circle::show(){Show(); cout<<"반지름 "<<radius<<"인 원"<<endl;}


Rect::Rect():Rect(0,0,0,0){}
Rect::Rect(int x, int y, int width, int height):Shape(x,y){    
    this->width=width; 
    this->height=height;
    cout<<", Rect 생성"<<endl;
}
Rect::~Rect(){cout<<"Rect 소멸";}
void Rect::show(){Show(); cout<<"폭"<<width<<", 높이"<<height<<"인 직사각형"<<endl;}


Triangle::Triangle():Triangle(0,0,0,0){}
Triangle::Triangle(int x, int y, int width, int height):Shape(x,y){
    this->width=width; 
    this->height=height;
    cout<<", Triangle 생성"<<endl;
}
Triangle::~Triangle(){cout<<"Triangle 소멸";}
void Triangle::show(){Show(); cout<<"밑변"<<width<<", 높이"<<height<<"인 삼각형"<<endl;}