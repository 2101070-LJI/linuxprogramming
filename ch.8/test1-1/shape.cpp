#include "shape.hpp"

void Shape::setPoint(int x, int y){this->x=x;this->y=y;}
void Shape::Show(){cout<<"좌표 ("<<x<<","<<y<<")에 ";}



void Circle::setCircle(int x, int y, int radius){setPoint(x,y); this->radius=radius;}
void Circle::show(){Show(); cout<<"반지름 "<<radius<<"인 원"<<endl;}



void Rect::setRect(int x, int y, int width, int height){
    setPoint(x,y); 
    this->width=width; 
    this->height=height;
    }
void Rect::show(){Show(); cout<<"폭"<<width<<", 높이"<<height<<"인 직사각형"<<endl;}


void Triangle::setTriangle(int x, int y, int width, int height){
    setPoint(x,y); 
    this->width=width; 
    this->height=height;
}
void Triangle::show(){Show(); cout<<"밑변"<<width<<", 높이"<<height<<"인 삼각형"<<endl;}
