//
// Created by Abdulaxad on 19/04/24.
//
#include <iostream>
#include "Set.h"



void Set::choseOption(){

        option=show1();
        if(option=="1"||option=="Login"||option=="login"||option=="LogIn") {
            std::cout<<show2();
            std::vector<std::string>copy=data;
            std::cout<<copy[0]<<std::endl;
            if(UserData::checkUserName(copy[0])&&UserData::checkUserPassword(copy[1])){
                std::cout<<"success"<<std::endl;
            }
        } else if(option=="2"||option=="CreateAccount"||option=="Createaccount"||option=="createaccount"){
            std::cout<<show3();

        }
        else if(option=="3"||option=="admin"||option=="Admin"){
            std::cout<<show4();

        }
        else{
            system("clear");


            choseOption();
        }

}