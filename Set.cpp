//
// Created by Abdulaxad on 19/04/24.
//
#include <iostream>
#include "Set.h"

#include <filesystem>

void Set::choseOption(){
        option=Screen::show1();

        if(option=="1"||option=="Login"||option=="login"||option=="LogIn") {
            std::cout<<show2();
            std::vector<std::string>copy;
            copy=data;


            if(UserData::checkUserName(copy[0])&&UserData::checkUserPassword(copy[1])){
                if(!option.empty())
                    option.clear();
                           choseOption2();

                        }else{
                            std::cout<<"\033[1;31m Username or password is incorrect!!!\n";

                            choseOption();

                        }
        }
        if(option=="3"||option=="admin"||option=="Admin"){
        func();
        }
        if(option=="2"||option=="CreateAccount"||option=="Createaccount"||option=="createaccount"){
            func1();
        }

       else{
            std::cout<<"\033[1;31m Wrong choice!!!\n";

            system("clear");
           choseOption();
       }

}

void Set::func(){
            std::cout<<show4();
    std::vector<std::string>copy;

    copy=data;
            if(Administration::check_id(copy[0])&&Administration::check_password(copy[1])){
                std::cout<<"success"<<std::endl;
               choseOption();

            }
            else{
                std::cout<<"\033[1;31m Username or password is incorrect!!!\n";
                choseOption();

            }
}

void Set::func1(){
                    std::cout<<show3();
    std::vector<std::string>copy;

    copy=data;
                try {
                    CreateAccount account;
                   account.setId()->setFullname(copy[0])->setEmail(copy[1])->setPassword(copy[2]);
                    std::cout<<"success"<<std::endl;
                    if(!copy.empty())
                        copy.clear();
                    if(!data.empty())
                        data.clear();
                    choseOption();
                }
                    catch (const std::runtime_error&error){
                        choseOption();
                    }
}


void Set::choseOption2(){

    option=Screen::bookStore();
    if(option=="1"||option=="searchbybookname"||option=="bookname"){

        func2();
    }
    if(option=="2"||option=="searchbybookauthor"||option=="bookauthor"){
        func3();
    }
    if(option=="3"||option=="searchbybookid"||option=="bookid"){
        func4();
    }
}






void Set::func2(){
    std::string search;
   search=bookStoreSearch();

   if(exist_by_book_name(search)){
       std::cout<<"Your Book Found ";
   }

}
void Set::func3(){
    std::string search;
    search=bookStoreSearch2();
    std::cout<<search;
//    if(exist_by_book_author(search)){
//        std::cout<<"Your Book Found ";
//    }
}
void Set::func4(){
    std::string search;
    search=bookStoreSearch3();
    if(exist_by_book_id(search)){
        std::cout<<"Your Book Found ";
    }
}