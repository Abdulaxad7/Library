//
// Created by Abdulaxad on 15/04/24.
//
#include <iostream>
#include "../../../Header/UserH/Administration.h"
#include "sstream"
#include <vector>
Administration::Administration(){
    file.open("Admin_Data.csv",std::ios::in|std::ios::out);
    if(!file.is_open())
        std::cerr<<"Unable to open Admin_Data.csv file."<<std::flush;
}
bool Administration::check_id(std::string id){
    this->id=id;
    if(std::getline(file,line)){
    }
     while (std::getline(file, line)) {

        std::stringstream stringstream(line);
        for (std::string fields; std::getline(stringstream, fields, ',');) {
            if(fields==id)
               return true;
         }

    }
    return false;
}

bool Administration::check_password(std::string password){
    file.close();
    file.open("Admin_Data.csv",std::ios::in|std::ios::out);
    this->password=password;
    if(std::getline(file,line)){
    }
     while (std::getline(file, line)) {
        std::stringstream stringstream(line);
        for (std::string fields; std::getline(stringstream, fields, ',');) {
            if(fields=="24=:5B7:-CDCADFK")
                return true;
         }
    }
    return false;
}

Administration::~Administration(){
    if(file.is_open())
        file.close();
}
