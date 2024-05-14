//
// Created by Abdulaxad on 15/04/24.
//

#ifndef UNTITLED22_ADMINISTRATION_H
#define UNTITLED22_ADMINISTRATION_H

#include "../../Source/Source/Hash/Encryption.h"
#include <fstream>
class Administration: private Encryption{
protected:
    Administration();

    ~Administration() override;
    bool check_id(std::string);
    bool check_password(std::string);
private:
    std::string  id;
    std::string  password;
    std::string  line;
    std::fstream file;
};


#endif //UNTITLED22_ADMINISTRATION_H
