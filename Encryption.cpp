//
// Created by Abdulaxad on 11/04/24.
//
#include <iostream>
#include <vector>
#include "Connect.h"
#include "Encryption.h"


 std::string Encryption::encHashPass(std::string_view password){

    char*hash=new char[std::size(password)];
    for(size_t i=0;i<std::size(password);i++)
        hash[i]=(+password[i]>>1)+(+i);

    return hash;

}


 bool Encryption::decHashPass(std::string_view password) {
     Connect connect;
     std::vector<std::string>names=connect.readPassword();
     for(std::string s:names){
         if(s==encHashPass(password))
         return true;
     }
     return false;
}
