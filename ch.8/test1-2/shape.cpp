#include "shape.hpp"

void Circle::setCircle(int x, int y, int radius){
    this->x=x; 
    this->y=y;
    this->radius=radius;
}
void Circle::show(){ cout<<"좌표 ("<<x<<","<<y<<")에 반지름 "<<radius<<"인 원"<<endl;}



void Rect::setRect(int x, int y, int width, int height){
    this->x=x; 
    this->y=y;
    this->width=width; 
    this->height=height;
    }
void Rect::show(){cout<<"좌표 ("<<x<<","<<y<<")에 폭"<<width<<", 높이"<<height<<"인 직사각형"<<endl;}


void Triangle::setTriangle(int x, int y, int width, int height){
    this->x=x; 
    this->y=y; 
    this->width=width; 
    this->height=height;
}
void Triangle::show(){cout<<"좌표 ("<<x<<","<<y<<")에 밑변"<<width<<", 높이"<<height<<"인 삼각형"<<endl;}
