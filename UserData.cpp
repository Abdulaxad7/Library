//
// Created by Abdulaxad on 10/04/24.
//
#include <algorithm>
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
    if(userName.contains(::isdigit(1))||userName.empty())
        return false;
    std::vector<std::string>names=connect.readName();
    this->userName=userName;

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

