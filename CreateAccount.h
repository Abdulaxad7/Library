//
// Created by Abdulaxad on 10/04/24.
//

#ifndef UNTITLED22_CREATEACCOUNT_H
#define UNTITLED22_CREATEACCOUNT_H

#include <fstream>
#include "Encryption.h"
#include "Connect.h"

class CreateAccount :private Encryption{
    std::string_view password;
    std::string_view fullname;
    std::string_view email;
    int id;

    std::fstream file;
public:
    CreateAccount();
    ~CreateAccount();
    CreateAccount(std::string_view ,  std::string_view ,  std::string_view , int id);

public:
    bool setPassword(std::string_view password);

    bool setFullname( std::string_view );

    bool setEmail( std::string_view );

    unsigned int setId();


};


#endif //UNTITLED22_CREATEACCOUNT_H
