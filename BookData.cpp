//
// Created by Abdulaxad on 15/04/24.
//
#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include "BookData.h"



template<class T>
auto BookData::open_file(){
    if(file.is_open()){
    }
    else if(!file.is_open()){
        file.open("BookData.csv",std::ios::app);
    }
    else{
        std::cerr<<"Unable to open file"<<std::flush;
    }
}
BookData::BookData() {
    open_file<void>();
}

std::vector<std::string> BookData::check_by_book_id(std::string_view book_id) {

    this->book_id=book_id;
    int targetColumn = 1;
    std::vector<std::string> allBookId;

    if (std::getline(file, line)) {
    }

    while (std::getline(file, line)) {

        std::stringstream stringstream(line);

        for (int i = 0; i < targetColumn ; i++) {
            std::cout<<i;
            std::getline(stringstream, field, ',');
        }
        std::getline(stringstream, field, ',');
        allBookId.emplace_back(field);
    }
    return allBookId;
}


std::vector<std::string> BookData::check_by_book_name(std::string_view book_name) {
    this->book_name=book_name;
}

std::vector<std::string> BookData::check_by_book_author(std::string_view book_author) {
    this->book_author=book_author;
}

BookData::~BookData(){
    if(file.is_open())
        file.close();
}