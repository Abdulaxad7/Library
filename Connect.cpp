//
// Created by Abdulaxad on 10/04/24.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Connect.h"

Connect::Connect() {
    file.open("userDataCenter.csv",std::ios::in|std::ios::out);
    if(!file.is_open()) {


        std::cerr << "Could not open file" << std::endl;
    }
}

std::vector<std::string> Connect::readId() {

    std::vector<std::string> data;
    std::istringstream stream(column1);
    while(std::getline(file, column1,',')){

        std::getline(file,column2);
        data.push_back(column2);
    }
    return data;
}

std::string_view Connect::readName() {

    std::istringstream stream(column1);
    std::getline(file,column1);
    while(std::getline(file,column1)){

        if(std::getline(stream,column2,',')){
        }
        if(std::getline(stream,column2,',')){
        }

        getline(stream,column2,',');

        return column2;
    }
    return "";

}

std::string_view Connect::readPassword() {

    std::istringstream stream(column1);
    std::getline(file,column1);
    while(std::getline(file,column1)){

        if(std::getline(stream,column2,',')){
        }
        if(std::getline(stream,column2,',')){
        }
        if(std::getline(stream,column2,',')){
        }
        getline(stream,column2,',');

        return column2;
    }
    return "";

}


Connect::~Connect(){
    if(file.is_open())
        file.close();
}
