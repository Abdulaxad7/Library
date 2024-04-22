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
   explicit CreateAccount();
    ~CreateAccount() override;
    CreateAccount(std::string_view ,  std::string_view ,  std::string_view , int id);

    CreateAccount* setPassword(std::string_view password);

    CreateAccount* setFullname( std::string_view );

    CreateAccount* setEmail( std::string_view );

    CreateAccount* setId();

private:
    template<class T>auto open_file();
};


#endif //UNTITLED22_CREATEACCOUNT_H
