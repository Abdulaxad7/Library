//
// Created by Abdulaxad on 10/04/24.
//
#include <cstdlib>
#include <sstream>
#include <iostream>
#include "Connect.h"
#include "CreateAccount.h"
static int i=0;
CreateAccount::CreateAccount(std::string_view password,  std::string_view fullname,  std::string_view email, int id)
        : password(password), fullname(fullname), email(email), id(id) {
    file.open("userDataCenter.csv",std::ios::in|std::ios::out);
    if(!file.is_open()) {


        std::cerr << "Could not open file" << std::endl;
    }
    if(!(file<<id<<","<<fullname<<","<<email<<","<<password<<std::endl)){
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


bool CreateAccount::setId() {
    std::string line;

    std::srand(time(0));
    id=rand()%99999999;

    if(!(file<<id<<",")){
        return false;
    }
    return true;
}

bool CreateAccount::setFullname( std::string_view fullname) {
    this->fullname = fullname;

    if(!(file<<fullname<<",")){
        return false;
    }
    return true;
}

bool CreateAccount::setEmail( std::string_view email) {
    this->email = email;
    if(!(file<<email<<",")){
        return false;
    }
    return true;
}

bool CreateAccount::setPassword(std::string_view password) {
    this->password = password;
    if(!(file<<password<<std::endl)){
        return false;
    }

    return true;
}



CreateAccount::~CreateAccount(){
    if(file.is_open())
        file.close();
}