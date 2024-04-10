//
// Created by Abdulaxad on 10/04/24.
//

#include "Connect.h"
#include <vector>
#include <string>
#include <string_view>
#include <iostream>
#include "UserData.h"

bool UserData::checkUserId(std::string userId) {
    std::vector<std::string>data=connect.readId();
    this->userId=userId;
    for(int i=0;i< data.size();i++) {
        std::cout<<data[i]<<std::endl;
        if(userId==data[i]){
            return true;
        }

    }
    return false;
}

bool UserData::checkUserName(std::string_view userName){
    this->userName=userName;

    if(userName==connect.readName()){
        return true;
    }
    return false;
}

bool UserData::checkUserPassword(std::string_view userPassword) {
    this->userPassword=userPassword;

    if(userPassword==connect.readPassword()){
        return true;
    }
    return false;
}

UserData::UserData(std::string userId, std::string_view userName, std::string_view userPassword) {
    this->userId=userId;
    this->userName=userName;
    this->userPassword=userPassword;
}
