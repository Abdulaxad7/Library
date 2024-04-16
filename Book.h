//
// Created by Abdulaxad on 15/04/24.
//

#ifndef UNTITLED22_BOOK_H
#define UNTITLED22_BOOK_H
#include "BookData.h"
#include "Author.h"

class Book :BookData{

public:
    Book();
    virtual ~Book(){

    }


    bool exist_by_book_name(std::string);
    bool exist_by_book_id(std::string);
    bool exist_by_book_author(std::string);

    double checkPrice() ;

    int checkPages() ;

     std::string checkBookName() ;

     Author checkAuthor() ;

private:
    template<class Check>auto checking(auto target_number);
    double price;
    int pages;
    std::string book_name;
    Author author;
    std::unique_ptr<std::vector<std::string >>check=std::make_unique<std::vector<std::string>>();
};


#endif //UNTITLED22_BOOK_H
