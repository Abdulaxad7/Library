//
// Created by Abdulaxad on 19/04/24.
//
#include <iostream>
#include "Set.h"



void Set::choseOption(){
        option=Screen::show1();
        if(option=="1"||option=="Login"||option=="login"||option=="LogIn") {
            std::cout<<show2();
           copy=data;
                        if(UserData::checkUserName(copy[0])&&UserData::checkUserPassword(copy[1])||UserData::checkUserId("")){
                            std::cout<<"success"<<std::endl;
            }
            std::cout<<show2();

        } else if(option=="2"||option=="CreateAccount"||option=="Createaccount"||option=="createaccount"){
            std::cout<<show3();
            copy=data;
            if(CreateAccount::setId()->setFullname(copy[0])->setEmail(copy[1])->setPassword(copy[2])){
                std::cout<<"success"<<std::endl;
            }

        }
        else if(option=="3"||option=="admin"||option=="Admin"){
            std::cout<<show4();

        }
        else{
            system("clear");
            choseOption();
        }

}