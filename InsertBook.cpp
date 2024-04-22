//
// Created by Abdulaxad on 15/04/24.
//
#include <fstream>
#include <iostream>
#include "InsertBook.h"
static int I=1;

template<class T>
auto InsertBook::open_file(){
    file.open("BookData.csv",std::ios::app);
    if(!file.is_open()){
        std::cerr<<"Unable to open file"<<std::flush;
    }
}


InsertBook::InsertBook() {
    open_file<void>();
    file<<I<<",";
    I++;
}
InsertBook*InsertBook::setId( std::string_view id) {
    this->id = id;
    try{
        file<<id<<",";
    }catch (const std::exception&exception){
        return this;
    }
    return this;
}

InsertBook* InsertBook::setName( std::string_view name) {
    this->name = name;
    try{
        file<<name<<",";;
    }catch (const std::exception&exception){
        return this;
    }
    return this;
}

InsertBook* InsertBook::setAuthor( std::string_view author) {
    this->author = author;
    try{
        file<<author<<",";;
    }catch (const std::exception&exception){
        return this;
    }
    return this;
}

InsertBook *InsertBook::setDate(std::string_view date) {
    this->date = date;
    try{
        file<<date<<",";
    }catch (const std::exception&exception){
        return this;
    }
    return this;
}

InsertBook *InsertBook::setPrice(std::string_view price) {
    this->price = price;
    try{
        file<<"$"<<price<<",";
    }catch (const std::exception&exception){
        return this;
    }
    return this;
}

InsertBook *InsertBook::setPages(std::string_view pages) {
    this->pages = pages;
    try{
        file<<pages<<std::endl;
    }catch (const std::exception&exception){
        return this;
    }
    return this;
}


InsertBook::InsertBook(std::string_view id, std::string_view name, std::string_view author,std::string_view date,std::string_view price,std::string_view pages)
:id(id),name(name),author(author),date(date),pages(pages),price(price){
    open_file<void>();
    try {
        file <<I<< ","<<id<<","<<name<<","<<author<<","<<date<<","<<price<<","<<pages<<std::endl;
    }catch (const std::exception&exception){
        std::cerr<<exception.what()<<std::flush;
    }
    I++;

}

InsertBook::~InsertBook() {
    if(file.is_open())
        file.close();
}

