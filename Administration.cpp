//
// Created by Abdulaxad on 15/04/24.
//
#include <iostream>
#include "Administration.h"
#include "sstream"
#include <vector>
Administration::Administration(){
    file.open("Admin_Data.csv",std::ios::in|std::ios::out);
    if(!file.is_open())
        std::cerr<<"Unable to open Admin_Data.csv file."<<std::flush;
}
bool Administration::check_id(std::string id){
    if(std::getline(file,line)){

    }
    int target=0;
    while (std::getline(file, line)) {
        std::stringstream stringstream(line);
        for (std::string field; std::getline(stringstream, field, ',');) {
           if(field==id&&target==1)
               return true;
            target++;
        }

    }
    return false;
}

bool Administration::check_password(std::string password){
    if(std::getline(file,line)){

    }
    int target=0;
    while (std::getline(file, line)) {
        std::stringstream stringstream(line);
        for (std::string field; std::getline(stringstream, field, ',');) {
            if(field==Encryption::encHashPass(password)&&target==2)
                return true;
            target++;
        }
    }
    return false;
}

Administration::~Administration(){
    if(file.is_open())
        file.close();
}
