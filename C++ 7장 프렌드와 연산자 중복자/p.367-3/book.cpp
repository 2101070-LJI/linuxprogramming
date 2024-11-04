#include "book.hpp"

Book::Book(string title, int price, int pages){this->title = title; this->price = price; this->pages = pages;}
   
   void Book::show(){cout << title << ' ' << price << "원 " << pages << "페이지" << endl;}
   
   string Book::getTitle(){
    return title;               // 제목 반환
   }
   
bool operator! (Book b){     //!연산자 함수
    if (b.price == 0)         // b객체의 가격이 0이면
        return true;  //true 반환
    else
        return false;
}