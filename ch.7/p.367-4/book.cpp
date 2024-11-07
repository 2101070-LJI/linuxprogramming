#include "book.hpp"  

Book::Book(string title, int price, int pages){this->title = title; this->price = price; this->pages = pages;}
void Book::show(){cout << title << ' ' << price << "원 " << pages << "페이지" << endl;}
   
string Book::getTitle(){     //책 제목 반환하는 멤버함수
    return title;  //제목 반환
}

bool operator< (string s, Book b){   //제목을 사전순으로 비교하는 < 연산자 함수
    if (s < b.title)   //문자열 s가 b보다 앞에 있으면
        return true;  
    else
        return false;
}
