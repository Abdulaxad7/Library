//
// Created by Abdulaxad on 15/04/24.
//
#include <iostream>
#include "Book.h"
template<class Check>auto Book::checking(auto target_number){
    std::vector<std::string>s=*check;
    std::cout<<s[target_number]<<std::endl;
}

double Book::checkPrice()  {
    checking<void>(5);
    return price;
}

int Book::checkPages()  {
    checking<void>(6);
    return pages;
}

 std::string Book::checkBookName()  {
    checking<void>(2);
    return book_name;
}

 Author Book::checkAuthor()  {
    checking<void>(3);
    return author;
}

bool Book::exist_by_book_name(std::string name) {
    *check= check_by_book_name(name);
    if(!check->empty())
        return true;
    return false;
}

bool Book::exist_by_book_id(std::string id) {
    *check= check_by_book_id(id);
    if(!check->empty())
        return true;
    return false;
}

bool Book::exist_by_book_author(std::string author) {
    *check= check_by_book_author(author);
    if(!check->empty())
        return true;
    return false;
}

Book::Book() {}


