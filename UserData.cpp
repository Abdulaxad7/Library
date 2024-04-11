//
// Created by Abdulaxad on 10/04/24.
//

#include <vector>
#include <string>
#include <string_view>
#include "UserData.h"

bool UserData::checkUserId(std::string userId) {
    std::vector<std::string>ids=connect.readId(userId);
    this->userId=userId;
    for(std::string s:ids ){
        if(userId==s)
            return true;
    }
    return false;
}

bool UserData::checkUserName(std::string_view userName){
    std::vector<std::string>names=connect.readName();
    this->userName=userName;
        for(std::string s:names){
            if(userName==s)
                return true;
        }
    return false;
}

bool UserData::checkUserPassword(std::string_view userPassword) {
    this->userPassword=userPassword;
    return Encryption::decHashPass(userPassword);
}

UserData::UserData(std::string userId, std::string_view userName, std::string_view userPassword) {
    this->userId=userId;
    this->userName=userName;
    this->userPassword=userPassword;
}

