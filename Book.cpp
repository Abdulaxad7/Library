//
// Created by Abdulaxad on 15/04/24.
//
#include <iostream>
#include "Book.h"
template<class Check>auto Book::checking(auto target_number){
    std::vector<std::string>s=*check;
    return s[target_number];
}
std::string Book::checkId()  {
    return checking<void>(1);

}
std::string Book::checkPrice()  {
   return checking<void>(5);

}
std::string Book::checkPages()  {
   return checking<void>(6);
}

 std::string Book::checkBookName()  {
   return checking<void>(2);

}
 std::string Book::checkAuthor()  {
   return checking<void>(3);
}
bool Book::exist_by_book_name(std::string name) {
    Book book;
    *check= book.check_by_book_name(name);
    if(!check->empty())
        return true;
    return false;
}

bool Book::exist_by_book_id(std::string id) {
    Book book;
    *check= book.check_by_book_id(id);
    if(!check->empty())
        return true;
    return false;
}
bool Book::exist_by_book_author(std::string author) {
    Book book;
    *check= book.check_by_book_author(author);
    if(!check->empty())
        return true;
    return false;
}

Book::Book() {}

void operator<<(std::ostream &out, Book &book) {
   out<<"Your Book name is : "<<book.checkBookName()
      <<"\nYour Book author is: "<<book.checkAuthor()
      <<"\nYour Book price is: "<<book.checkPrice()
      <<"\nYour Book Pages is: "<<book.checkPages()<<std::endl;
}


