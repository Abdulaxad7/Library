//
// Created by Abdulaxad on 10/04/24.
//
#include <vector>
#include <string>
#include <string_view>
#include <iostream>
#include "../../../Header/UserH/UserData.h"

bool UserData::checkUserId(std::string userId) {
    Connect connect;
    std::vector<std::string>ids=connect.readId(userId);
    this->userId=userId;
    for(std::string s:ids ){
        if(userId==s)
            return true;
    }
    return false;
}

bool UserData::checkUserName(std::string_view userName){
    this->userName=userName;
    if(userName.empty())
        return false;
    Connect connect;
    std::vector<std::string>names=connect.readName();
        for(std::string s:names){
            if(userName==s)
                return true;
            {
                s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
                if (userName == s)
                    return true;
            }
            {
                std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return std::tolower(c); });
                if (userName == s)
                    return true;
            }
            {
                std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return std::toupper(c); });
                if (userName == s)
                    return true;
            }
        }

    return false;
}

bool UserData::checkUserPassword(std::string_view userPassword) {
    this->userPassword=userPassword;
    return Encryption::decHashPass(userPassword);
}

