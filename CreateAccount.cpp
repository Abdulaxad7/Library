//
// Created by Abdulaxad on 10/04/24.
//
#include <cstdlib>
#include <sstream>
#include <iostream>
#include "CreateAccount.h"
static int i=1;



template<class T>auto CreateAccount::open_file(){
    file.open("userDataCenter.csv",std::ios::in|std::ios::out);
    if(!file.is_open()) {
        std::cerr << "Could not open file" << std::endl;
    }
}

CreateAccount::CreateAccount(std::string_view password,  std::string_view fullname,  std::string_view email, int id)
        : password(password), fullname(fullname), email(email), id(id) {
    open_file<void>();
        try{
            file<<id<<","<<fullname<<","<<email<<","<<password<<std::endl;
        return;
    }catch (const std::exception&exception){
            return;
        }
}

CreateAccount::CreateAccount() {
    open_file<void>();
    file<<i<<",";
    i++;
}


CreateAccount* CreateAccount::setId() {
    std::string line;

    std::srand(time(0));
    id=rand()%99999999;

    try{
        file<<id<<",";
        return this;
    }catch (const std::exception&exception) {
        return this;
    }
}

CreateAccount* CreateAccount::setFullname( std::string_view fullname) {
    this->fullname = fullname;

    try{
        file<<fullname<<",";
            return this;
    }catch (const std::exception&exception) {
            return this;
    }
}

CreateAccount* CreateAccount::setEmail( std::string_view email) {
    this->email = email;
    try {
        file << email << ",";
        return this;
    }catch (const std::exception&exception) {

        return this;
    }
}



CreateAccount* CreateAccount::setPassword(std::string_view password) {
    this->password = password;

   try{

       file<<Encryption::encHashPass(password)<<std::endl;
        return this;
    }catch (const std::exception&exception) {
       return this;
   }
}
CreateAccount::~CreateAccount(){
    if(file.is_open())
        file.close();
}



