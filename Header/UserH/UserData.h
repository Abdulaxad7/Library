//
// Created by Abdulaxad on 10/04/24.
//

#ifndef UNTITLED22_USERDATA_H
#define UNTITLED22_USERDATA_H

#include "Connect.h"
#include "../../Source/Source/Hash/Encryption.h"
class UserData:private Encryption{
    std::string userId;
    std::string_view userName;
    std::string_view userPassword;
public:
    UserData()=default;
protected:
    bool checkUserId(std::string);
    bool checkUserName(std::string_view );
    bool checkUserPassword(std::string_view );

};


#endif //UNTITLED22_USERDATA_H
