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

std::vector<std::string> Connect::readId(std::string_view id) {
    int targetColumn = 2;
    std::vector<std::string> allId;
     if (std::getline(file, line)) {
     }

    while (std::getline(file, line)) {
        std::stringstream stringstream(line);

        for (int i = 0; i < targetColumn -1; i++) {
            std::getline(stringstream, field, ',');
        }
        std::getline(stringstream, field, ',');
        allId.push_back(field);
    }
    return allId;
}

std::vector<std::string> Connect::readName() {

    int targetColumn = 3;
    std::vector<std::string> allNames;
    if (std::getline(file, line)) {
    }

    while (std::getline(file, line)) {
        std::stringstream stringstream(line);

        for (int i = 0; i < targetColumn -1; i++) {
            std::getline(stringstream, field, ',');
        }
        std::getline(stringstream, field, ',');
        allNames.push_back(field);
    }
    return allNames;

}

std::vector<std::string> Connect::readPassword() {

    int targetColumn = 5;
    std::vector<std::string> allPasswords;
    if (std::getline(file, line)) {
    }

    while (std::getline(file, line)) {
        std::stringstream stringstream(line);

        for (int i = 0; i < targetColumn -1; i++) {
            std::getline(stringstream, field, ',');
        }
        std::getline(stringstream, field, ',');
        allPasswords.push_back(field);
    }
    return allPasswords;

}


Connect::~Connect(){
    if(file.is_open())
        file.close();
}
