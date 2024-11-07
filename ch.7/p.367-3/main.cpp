#include "book.hpp"
int main(void){
   Book book("벼룩시장", 0, 50);     // Book 클래스의 book 객체 생성
   
   if (!book) cout << "공짜다" << endl;     //가격이 0이면 공짜
}