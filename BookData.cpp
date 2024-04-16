//
// Created by Abdulaxad on 15/04/24.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <string_view>
#include "BookData.h"

template<class Search>
auto BookData::search(auto target_search,auto target_page){
    if (std::getline(file, line)) {
    }
    while (std::getline(file, line)) {
        std::stringstream stringstream(line);
        std::vector<std::string> fields;
        for (std::string field; std::getline(stringstream, field, ',');) {
            fields.push_back(field);
        }


        if (!fields.empty() && fields[target_page] == target_search) {
            founded = fields;
            break;
        }
    }
        if (!founded.empty()) {
            for (const std::string& data : founded) {
            }
        } else {
           std::cerr<<"Not found"<<std::flush;
        }
}

template<class Open_File>
auto BookData::open_file(){
 file.open("BookData.csv",std::ios::in|std::ios::out);
    if(!file.is_open()){
        std::cerr<<"Unable to open file"<<std::flush;
    }

}

BookData::BookData() {
    open_file<void>();
}



std::vector<std::string> BookData::check_by_book_id(std::string_view book_id) {
    this->book_id=book_id;
    search<void>(book_id,1);
    return founded;
}


std::vector<std::string> BookData::check_by_book_name(std::string_view book_name) {
    this->book_name=book_name;
    search<void>(book_name,2);
    return founded;
}

std::vector<std::string> BookData::check_by_book_author(std::string_view book_author) {
    this->book_author=book_author;
    search<void>(book_author,3);
    return founded;
}

BookData::~BookData(){
    if(file.is_open())
        file.close();
}