#ifndef BOOK_HPP_   
#define BOOK_HPP_   //중복 방지
#include <iostream> 
#include<string>    
using namespace std;

class Book {
    string title;       //제목
    int price, pages;  //가격, 페이지 수
public:
    Book(string title = "", int price = 0, int pages = 0);
    void show();            //멤버함수
    string getTitle();      //제목을 반환하는 멤버함수
    friend bool operator< (string s,Book b);    //<연산자
};

#endif 