//
// Created by Abdulaxad on 10/04/24.
//
#include <cstdlib>
#include <sstream>
#include <iostream>
#include "CreateAccount.h"
static int i=1;
CreateAccount::CreateAccount(std::string_view password,  std::string_view fullname,  std::string_view email, int id)
        : password(password), fullname(fullname), email(email), id(id) {
    file.open("userDataCenter.csv",std::ios::in|std::ios::out);
    if(!file.is_open()) {
        std::cerr << "Could not open file" << std::endl;
    }
        try{
            file<<id<<","<<fullname<<","<<email<<","<<password<<std::endl;
        return;
    }catch (const std::exception&exception){
            return;
        }
}

CreateAccount::CreateAccount() {

    file.open("userDataCenter.csv",std::ios::in|std::ios::out|std::ios::app);
    if(!file.is_open()) {
        std::cerr << "Could not open file" << std::endl;
    }

    file<<i<<",";
    i++;
}


unsigned int CreateAccount::setId() {
    std::string line;

    std::srand(time(0));
    id=rand()%99999999;

    try{
        file<<id<<",";
        return id;
    }catch (const std::exception&exception) {
        return false;
    }
}

bool CreateAccount::setFullname( std::string_view fullname) {
    this->fullname = fullname;

    try{
        file<<fullname<<",";
            return true;
    }catch (const std::exception&exception) {
            return false;
    }
}

bool CreateAccount::setEmail( std::string_view email) {
    this->email = email;
    try {
        file << email << ",";
        return true;
    }catch (const std::exception&exception) {

        return false;
    }
}



bool CreateAccount::setPassword(std::string_view password) {
    this->password = password;

   try{

       file<<Encryption::encHashPass(password)<<std::endl;
        return true;
    }catch (const std::exception&exception) {
       return false;
   }
}
CreateAccount::~CreateAccount(){
    if(file.is_open())
        file.close();
}