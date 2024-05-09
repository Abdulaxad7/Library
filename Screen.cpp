//
// Created by Abdulaxad on 11/04/24.
//
#include <iostream>
#include <iomanip>
#include <ctime>
#include <thread>
#include "Screen.h"
#include <cctype>
#include <algorithm>
#include "Set.h"
std::string_view GREEN=  "\033[38;5;28m";
std::string_view RESET=  "\033[0m";
std::string_view LINE="\033[1;3m";
std::string_view LINE1="\033[1;1m";
std::string_view LINE2="\033[1;7m";


template<class A>auto Screen::space(auto x)->void {
    for(int i=0;i<x;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";
    }
}

void Screen::display() {
    space<void>(50);
    std::cout<<RESET<<std::endl;
    for(int i=0;i<51;i++){
        if(i==25)
            std::cout<<RESET<< GREEN  <<LINE1<< "||\033[1;3m" <<std::setw(85)<<"BASIC LIBRARY";
        if(i>49) {
            std::cout << RESET << GREEN << std::setw(67) << LINE1 << "||" << std::endl;
        }
    }
    space<void>(50);
    std::cout<<"\n";
    system("clear");
}

std::string Screen::show1(){
    space<void>(50);
    std::cout<<RESET<<std::endl;
            std::cout << RESET << GREEN << LINE1 << "||  ";
        for (int i = 0; i < 51; i++) {
            if (i == 25) {
                for (int j = 0; j < 20; j++) {
                    std::cout << GREEN << "\033[1;4m" << "———";
                    if(j==19)
                        std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
                }
                std::cout <<std:: endl;
                for (int k = 0; k < 19; k++) {
                    if (k % 2 == 0) {
                        if (k == 0) {
                            std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(14) << "\033[1;1m"<< "——————————| Welcome to LIBRARY |——————————" << RESET<< std::setw(16) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                        }
                        if (k == 2) {
                            std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<< std::setw(8) << GREEN << "||"<<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"<<std::setw(3)<<"||" << std::endl;
                        }
                        if (k == 2) {
                            std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<< std::setw(8) << GREEN << "||"<<std::setw(10)<<"|"<<std::setw(18)<<"¯¯|¯¯"<<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)<<"|"<<"¯¯¯|"<<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)<<"\\"<<"   /"<<std::setw(12)<<"||" << std::endl;
                        }
                        if (k == 4) {
                            std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(19) <<LINE

                                      << "——————————| Log In |——————————" << RESET

                                      << std::setw(23) << GREEN << "||"
                                        <<std::setw(10)<<"|"
                                        <<std::setw(12)<<"|"
                                        <<std::setw(8)<<"|"<<"   )"
                                    <<std::setw(6)<<"|"<<"___)"
                                    <<std::setw(6)<<"|"<<"___|"
                                    <<std::setw(6)<<"|"<<"___)"
                                    <<std::setw(7)<<"\\"<<" /"
                                    <<std::setw(13)<<"||" << std::endl;
                        }
                        if (k == 6) {
                            std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                      << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                      << std::setw(8) << GREEN << "||"
                                    <<std::setw(10)<<"|"
                                    <<std::setw(12)<<"|"
                                    <<std::setw(8)<<"|"<<"¯¯¯)"
                                    <<std::setw(6)<<"|"<<" \\"
                                    <<std::setw(8)<<"|"<<"¯¯¯|"
                                    <<std::setw(6)<<"|"<<" \\"
                                    <<std::setw(10)<<"|"
                                    <<std::setw(14)<<"||" << std::endl;
                        }
                        if (k == 8) {
                            std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(15) << LINE
                                      << "——————————| Create Account |——————————" << RESET
                                      << std::setw(19) << GREEN << "||"
                                    <<std::setw(10)<<"|"<<"_____"
                                    <<std::setw(9)<<"__|__"
                                    <<std::setw(6)<<"|"<<"___)"
                                    <<std::setw(6)<<"|"<<"  \\"
                                    <<std::setw(7)<<"|"<<"   |"
                                    <<std::setw(6)<<"|"<<"  \\"
                                    <<std::setw(9)<<"|"
                                    <<std::setw(14)<<"||" << std::endl;
                        }
                        if (k == 10) {
                            std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                      << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                      << std::setw(8) << GREEN << "||"
                                    <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                    <<std::setw(3)<<"||" << std::endl;
                        }
                        if (k == 10) {
                            std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                      << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                      << std::setw(8) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                        }
                        if (k == 12) {
                            std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(19) << LINE
                                      << "——————————| Admin |——————————" << RESET
                                      << std::setw(24) << GREEN << "||" <<std::setw(56)<<
                                      "\033[1;4m"<<"———————————————————————————————"<<RESET<<GREEN<<"   ||"<< std::endl;
                        }
                    }
                }
                for (int l = 0; l < 20; l++) {
                    if(l==0)
                        std::cout << RESET << GREEN << LINE1 << "||  ";
                    std::cout << GREEN << "\033[1;4m" << "———";
                    if (l == 19)
                        std::cout << RESET <<std::setw(54)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                        GREEN<<"\033[1;1m ENTER YOUR CHOICE: "<<std::setw(15)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
                }
            }
        }
    for(int i=0;i<10000;i++){
        std::cout<<"\b\b\b";
    }
    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";

        if(i==37){
            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";
            std::cin>>option;
        }

    }



    return option;
}



std::string Screen::show2(){


    space<void>(50);

    std::cout<<RESET<<std::endl;

    std::cout << RESET << GREEN << LINE1 << "||  ";
    for (int i = 0; i < 51; i++) {
        if (i == 25) {
            for (int j = 0; j < 20; j++) {

                std::cout << GREEN << "\033[1;4m" << "———";
                if(j==19)
                    std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
            }
            std::cout <<std:: endl;

            for (int k = 0; k < 19; k++) {
                if (k % 2 == 0) {
                    if (k == 0) {
                        std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(14) << "\033[1;1m"

                                  << "——————————| Welcome to LIBRARY |——————————" << RESET
                                  << std::setw(16) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(18)<<"¯¯|¯¯"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"\\"<<"   /"
                                  <<std::setw(12)<<"||" << std::endl;
                    }
                    if (k == 4) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(19) << LINE2

                                  << "——————————| Log In |——————————" << RESET

                                  << std::setw(23) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"   )"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"___|"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(7)<<"\\"<<" /"
                                  <<std::setw(13)<<"||" << std::endl;
                    }
                    if (k == 6) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(8)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 8) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(15) << LINE
                                  << "——————————| Create Account |——————————" << RESET
                                  << std::setw(19) << GREEN << "||"
                                  <<std::setw(10)<<"|"<<"_____"
                                  <<std::setw(9)<<"__|__"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(7)<<"|"<<"   |"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(9)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"

                                <<std::setw(56)<<
                                "\033[1;4m"<<"———————————————————————————————"<<RESET<<GREEN<<"   ||"<<std::endl;
                    }
                    if (k == 12) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(19) << LINE
                                  << "——————————| Admin |——————————" << RESET
                                  << std::setw(24) << GREEN << "||"
                                  <<std::setw(56)<< "\033[1;7m" << "|"<<RESET<<GREEN<<"\033[1;1m ENTER YOUR NAME and "<<std::setw(14)<< "\033[1;7m" << "|"<<RESET<<GREEN<<"   ||"<< std::endl;
                    }
                }
            }
            for (int l = 0; l < 20; l++) {
                if(l==0)
                    std::cout << RESET << GREEN << LINE1 << "||  ";
                std::cout << GREEN << "\033[1;4m" << "———";
                if (l == 19)
                    std::cout << RESET <<std::setw(54)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                              GREEN<<"\033[1;1m YOUR PASSWORD: "<<std::setw(19)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
            }
        }
    }
    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";
        if(i==37){
            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";
            std::string username;
            std::string password;

            std::cin>>username;

            std::cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            std::cin>>password;
//            std::cin.ignore();
//            username.erase(std::remove(username.begin(),username.end(),' '),username.end());
//            password.erase(std::remove(password.begin(),password.end(),' '),password.end());

            if(username.empty()|| std::any_of(username.begin(), username.end(),::isdigit)){
                std::cout<<"\n\033[1;31mUsername should not contain integer type values!!!\n"<<std::endl;
                show2();}
                if(!data.empty())
                    data.clear();
                data.push_back(username);
            data.push_back(password);
        }
    }



    return "";
}


std::string Screen::show3() {
    space<void>(51);

    std::cout<<RESET<<std::endl;

    std::cout << RESET << GREEN << LINE1 << "||  ";
    for (int i = 0; i < 51; i++) {
        if (i == 25) {
            for (int j = 0; j < 21; j++) {

                    std::cout << GREEN << "\033[1;4m" << "———";

                if(j==20)
                    std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
            }
            std::cout <<std:: endl;

            for (int k = 0; k < 19; k++) {
                if (k % 2 == 0) {
                    if (k == 0) {
                        std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(14) << "\033[1;1m"

                                  << "——————————| Welcome to LIBRARY |——————————   " << RESET
                                  << std::setw(16) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(18)<<"¯¯|¯¯"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"\\"<<"   /"
                                  <<std::setw(12)<<"||" << std::endl;
                    }
                    if (k == 4) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(19) << LINE

                                  << "——————————| Log In |——————————   " << RESET

                                  << std::setw(23) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"   )"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"___|"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(7)<<"\\"<<" /"
                                  <<std::setw(13)<<"||" << std::endl;
                    }
                    if (k == 6) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(8)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 8) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(15) << LINE2
                                  << " ——————————| Create Account |—————————— " << RESET
                                  << std::setw(20) << GREEN << "||"
                                  <<std::setw(10)<<"|"<<"_____"
                                  <<std::setw(9)<<"__|__"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(7)<<"|"<<"   |"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(9)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"

                                  <<std::setw(53)<<
                                  "\033[1;4m"<<"——————————————————————————————————"<<RESET<<GREEN<<"   ||"<<std::endl;
                    }
                    if (k == 12) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(19) << LINE
                                  << "——————————| Admin |——————————" << RESET
                                  << std::setw(27) << GREEN << "||"
                                  <<std::setw(53)<< "\033[1;7m" << "|"<<RESET<<GREEN<<"\033[1;1m ENTER YOUR NAME and EMAIL and"<<std::setw(8)<< "\033[1;7m" << "|"<<RESET<<GREEN<<"   ||"<< std::endl;
                    }
                }
            }
            for (int l = 0; l < 21; l++) {
                if(l==0)
                    std::cout << RESET << GREEN << LINE1 << "||  ";
                std::cout << GREEN << "\033[1;4m" << "———";
                if (l == 20)
                    std::cout << RESET <<std::setw(51)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                              GREEN<<"\033[1;1m CREATE PASSWORD: "<<std::setw(20)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
            }
        }
    }
    std::string s;
    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";

        if(i==37){

            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";

            std::string username;
            std::string password;
            std::string email;
            std::cin>>username;
            username.erase(std::remove(username.begin(),username.end(),' '),username.end());
            std::cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            std::cin>>email;
            std::cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            std::cin>>password;
           if( std::any_of(username.begin(),username.end(),::isdigit)) {

               std::cout << "\n\033[1;31m Username should not contain integer type values!!!\n" ;

               show3();
           }if(islower(username[0])){
                std::cout << "\n\033[1;31m Username should start with uppercase!!!\n" ;
                show3();
           }
            if(!std::any_of(email.begin(),email.end(),[](char c) { return c == '@';})||email[0]=='@'||!std::any_of(email.begin(),email.end(),[](char c) { return c == '.';})){
                std::cout << "\n\033[1;31m Email should be type of example@email.org!!!\n" ;
                show3();
            }
            if(password.length()<=4||!std::any_of(password.begin(),password.end(),::isdigit)){
                std::cout << "\n\033[1;31m Your password is too easily guessable. Try to use mixed data types!!!\n" ;
                show3();
            }

            if(!data.empty())
                data.clear();
            data.emplace_back(username);
            data.emplace_back(email);
            data.emplace_back(password);

        }
    }



    return "";
}

std::string Screen::show4() {

    space<void>(50);

    std::cout<<RESET<<std::endl;

    std::cout << RESET << GREEN << LINE1 << "||  ";
    for (int i = 0; i < 51; i++) {
        if (i == 25) {
            for (int j = 0; j < 20; j++) {

                std::cout << GREEN << "\033[1;4m" << "———";
                if(j==19)
                    std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
            }
            std::cout <<std:: endl;

            for (int k = 0; k < 19; k++) {
                if (k % 2 == 0) {
                    if (k == 0) {
                        std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(14) << "\033[1;1m"

                                  << "——————————| Welcome to LIBRARY |——————————" << RESET
                                  << std::setw(16) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(18)<<"¯¯|¯¯"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"\\"<<"   /"
                                  <<std::setw(12)<<"||" << std::endl;
                    }
                    if (k == 4) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(19) << LINE

                                  << "——————————| Log In |——————————" << RESET

                                  << std::setw(23) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"   )"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"___|"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(7)<<"\\"<<" /"
                                  <<std::setw(13)<<"||" << std::endl;
                    }
                    if (k == 6) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(8)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 8) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(15) << LINE
                                  << "——————————| Create Account |——————————" << RESET
                                  << std::setw(19) << GREEN << "||"
                                  <<std::setw(10)<<"|"<<"_____"
                                  <<std::setw(9)<<"__|__"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(7)<<"|"<<"   |"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(9)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"

                                  <<std::setw(56)<<
                                  "\033[1;4m"<<"———————————————————————————————"<<RESET<<GREEN<<"   ||"<<std::endl;
                    }
                    if (k == 12) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(19) << LINE2
                                  << "——————————| Admin |——————————" << RESET
                                  << std::setw(24) << GREEN << "||"
                                  <<std::setw(56)<< "\033[1;7m" << "|"<<RESET<<GREEN<<"\033[1;1m ENTER YOUR ID and "<<std::setw(16)<< "\033[1;7m" << "|"<<RESET<<GREEN<<"   ||"<< std::endl;
                    }
                }
            }
            for (int l = 0; l < 20; l++) {
                if(l==0)
                    std::cout << RESET << GREEN << LINE1 << "||  ";
                std::cout << GREEN << "\033[1;4m" << "———";
                if (l == 19)
                    std::cout << RESET <<std::setw(54)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                              GREEN<<"\033[1;1m YOUR PASSWORD: "<<std::setw(19)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
            }
        }
    }
    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";
        if(i==37){
            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";
            std::string adminUsername;
            std::string adminPassword;

            std::cin>>adminUsername;

            std::cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            std::cin>>adminPassword;
            std::cin.ignore();
            adminUsername.erase(std::remove(adminUsername.begin(),adminUsername.end(),' '),adminUsername.end());
            adminPassword.erase(std::remove(adminPassword.begin(),adminPassword.end(),' '),adminPassword.end());

            if(!data.empty())
               data.clear();

            data.push_back(adminUsername);
            data.push_back(adminPassword);
        }
    }
    return "";
}


std::string Screen::bookStore(){



    space<void>(50);

    std::cout<<RESET<<std::endl;

    std::cout << RESET << GREEN << LINE1 << "||  ";
    for (int i = 0; i < 51; i++) {
        if (i == 25) {
            for (int j = 0; j < 20; j++) {

                std::cout << GREEN << "\033[1;4m" << "———";
                if(j==19)
                    std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
            }
            std::cout <<std:: endl;

            for (int k = 0; k < 19; k++) {
                if (k % 2 == 0) {
                    if (k == 0) {
                        std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(18) <<
                        "\033[1;1m"<< "——————————|Book Store|——————————" << RESET<<
                        std::setw(22) << GREEN << "||"
                        <<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                        std::setw(8) << GREEN << "||"<<std::setw(4)<<
                        " ——————————————————————————————————————————————————————————————————————————————————"<<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) <<
                        LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                        std::setw(8) << GREEN << "||"<<std::setw(10)<<"|"
                        <<std::setw(18)<<"¯¯|¯¯"<<std::setw(6)<<"|"<<"¯¯¯)"
                        <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)<<"|"<<"¯¯¯|"
                        <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)
                        <<"\\"<<"   /"<<std::setw(12)<<
                        "||" << std::endl;
                    }
                    if (k == 4) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(13) <<LINE

                                  << "——————————| Search by book name |——————————" << RESET

                                  << std::setw(16) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"   )"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"___|"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(7)<<"\\"<<" /"
                                  <<std::setw(13)<<"||" << std::endl;
                    }
                    if (k == 6) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(8)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 8) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(12) << LINE
                                  << "——————————| Search by book author |——————————" << RESET
                                  << std::setw(15) << GREEN << "||"
                                  <<std::setw(10)<<"|"<<"_____"
                                  <<std::setw(9)<<"__|__"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(7)<<"|"<<"   |"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(9)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
//
                    if (k == 12) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(14) << LINE
                                  << "——————————| Search by book id |——————————" << RESET
                                  << std::setw(17) << GREEN << "||" <<std::setw(56)<<
                                  "\033[1;4m"<<"———————————————————————————————"<<RESET<<GREEN<<"   ||"<< std::endl;
                    }
                }
            }
            for (int l = 0; l < 20; l++) {
                if(l==0)
                    std::cout << RESET << GREEN << LINE1 << "||  ";
                std::cout << GREEN << "\033[1;4m" << "———";
                if (l == 19)
                    std::cout << RESET <<std::setw(54)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                              GREEN<<"\033[1;1m ENTER YOUR CHOICE: "<<std::setw(15)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
            }
        }
    }

    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";

        if(i==37){
            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";
            std::cin>>option;
        }

    }



    return option;
}









std::string  Screen::bookStoreSearch(){


    space<void>(50);

    std::cout<<RESET<<std::endl;

    std::cout << RESET << GREEN << LINE1 << "||  ";
    for (int i = 0; i < 51; i++) {
        if (i == 25) {
            for (int j = 0; j < 20; j++) {

                std::cout << GREEN << "\033[1;4m" << "———";
                if(j==19)
                    std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
            }
            std::cout <<std:: endl;

            for (int k = 0; k < 19; k++) {
                if (k % 2 == 0) {
                    if (k == 0) {
                        std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(18) <<
                                  "\033[1;1m"<< "——————————|Book Store|——————————" << RESET<<
                                  std::setw(22) << GREEN << "||"
                                  <<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                                  std::setw(8) << GREEN << "||"<<std::setw(4)<<
                                  " ——————————————————————————————————————————————————————————————————————————————————"<<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) <<
                                  LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                                  std::setw(8) << GREEN << "||"<<std::setw(10)<<"|"
                                  <<std::setw(18)<<"¯¯|¯¯"<<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)
                                  <<"\\"<<"   /"<<std::setw(12)<<
                                  "||" << std::endl;
                    }
                    if (k == 4) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(13) <<LINE2

                                  << "——————————| Search by book name |——————————" << RESET

                                  << std::setw(16) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"   )"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"___|"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(7)<<"\\"<<" /"
                                  <<std::setw(13)<<"||" << std::endl;
                    }
                    if (k == 6) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(8)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 8) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(12) << LINE
                                  << "——————————| Search by book author |——————————" << RESET
                                  << std::setw(15) << GREEN << "||"
                                  <<std::setw(10)<<"|"<<"_____"
                                  <<std::setw(9)<<"__|__"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(7)<<"|"<<"   |"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(9)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
//
                    if (k == 12) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(14) << LINE
                                  << "——————————| Search by book id |——————————" << RESET
                                  << std::setw(17) << GREEN << "||" <<std::setw(56)<<
                                  "\033[1;4m"<<"———————————————————————————————"<<RESET<<GREEN<<"   ||"<< std::endl;
                    }
                }
            }
            for (int l = 0; l < 20; l++) {
                if(l==0)
                    std::cout << RESET << GREEN << LINE1 << "||  ";
                std::cout << GREEN << "\033[1;4m" << "———";
                if (l == 19)
                    std::cout << RESET <<std::setw(54)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                              GREEN<<"\033[1;1m ENTER YOUR BOOK NAME: "<<std::setw(12)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
            }
        }
    }
char s[100];

    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";

        if(i==37){
            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";
            if(!option.empty())
            option.clear();

        for(int i=0;i<2;i++) {
                std::getline(std::cin, option);
        }
        }
    }
    return  option;

}




std::string  Screen::bookStoreSearch2(){

    space<void>(50);

    std::cout<<RESET<<std::endl;

    std::cout << RESET << GREEN << LINE1 << "||  ";
    for (int i = 0; i < 51; i++) {
        if (i == 25) {
            for (int j = 0; j < 20; j++) {

                std::cout << GREEN << "\033[1;4m" << "———";
                if(j==19)
                    std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
            }
            std::cout <<std:: endl;

            for (int k = 0; k < 19; k++) {
                if (k % 2 == 0) {
                    if (k == 0) {
                        std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(18) <<
                                  "\033[1;1m"<< "——————————|Book Store|——————————" << RESET<<
                                  std::setw(22) << GREEN << "||"
                                  <<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                                  std::setw(8) << GREEN << "||"<<std::setw(4)<<
                                  " ——————————————————————————————————————————————————————————————————————————————————"<<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) <<
                                  LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                                  std::setw(8) << GREEN << "||"<<std::setw(10)<<"|"
                                  <<std::setw(18)<<"¯¯|¯¯"<<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)
                                  <<"\\"<<"   /"<<std::setw(12)<<
                                  "||" << std::endl;
                    }
                    if (k == 4) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(13) <<LINE

                                  << "——————————| Search by book name |——————————" << RESET

                                  << std::setw(16) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"   )"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"___|"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(7)<<"\\"<<" /"
                                  <<std::setw(13)<<"||" << std::endl;
                    }
                    if (k == 6) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(8)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 8) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(12) << LINE2
                                  << "——————————| Search by book author |——————————" << RESET
                                  << std::setw(15) << GREEN << "||"
                                  <<std::setw(10)<<"|"<<"_____"
                                  <<std::setw(9)<<"__|__"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(7)<<"|"<<"   |"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(9)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
//
                    if (k == 12) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(14) << LINE
                                  << "——————————| Search by book id |——————————" << RESET
                                  << std::setw(17) << GREEN << "||" <<std::setw(56)<<
                                  "\033[1;4m"<<"———————————————————————————————"<<RESET<<GREEN<<"   ||"<< std::endl;
                    }
                }
            }
            for (int l = 0; l < 20; l++) {
                if(l==0)
                    std::cout << RESET << GREEN << LINE1 << "||  ";
                std::cout << GREEN << "\033[1;4m" << "———";
                if (l == 19)
                    std::cout << RESET <<std::setw(54)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                              GREEN<<"\033[1;1m ENTER YOUR AUTHOR NAME: "<<std::setw(10)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
            }
        }
    }

    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";

        if(i==37){
            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";
            if(!option.empty())
                option.clear();
            for(int i=0;i<2;i++) {
                std::getline(std::cin, option);
            }
        }
    }
    return  option;
}








std::string  Screen::bookStoreSearch3(){

    space<void>(50);

    std::cout<<RESET<<std::endl;

    std::cout << RESET << GREEN << LINE1 << "||  ";
    for (int i = 0; i < 51; i++) {
        if (i == 25) {
            for (int j = 0; j < 20; j++) {

                std::cout << GREEN << "\033[1;4m" << "———";
                if(j==19)
                    std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
            }
            std::cout <<std:: endl;

            for (int k = 0; k < 19; k++) {
                if (k % 2 == 0) {
                    if (k == 0) {
                        std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(18) <<
                                  "\033[1;1m"<< "——————————|Book Store|——————————" << RESET<<
                                  std::setw(22) << GREEN << "||"
                                  <<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                                  std::setw(8) << GREEN << "||"<<std::setw(4)<<
                                  " ——————————————————————————————————————————————————————————————————————————————————"<<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) <<
                                  LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                                  std::setw(8) << GREEN << "||"<<std::setw(10)<<"|"
                                  <<std::setw(18)<<"¯¯|¯¯"<<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)
                                  <<"\\"<<"   /"<<std::setw(12)<<
                                  "||" << std::endl;
                    }
                    if (k == 4) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(13) <<LINE

                                  << "——————————| Search by book name |——————————" << RESET

                                  << std::setw(16) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"   )"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"___|"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(7)<<"\\"<<" /"
                                  <<std::setw(13)<<"||" << std::endl;
                    }
                    if (k == 6) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(8)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 8) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(12) << LINE
                                  << "——————————| Search by book author |——————————" << RESET
                                  << std::setw(15) << GREEN << "||"
                                  <<std::setw(10)<<"|"<<"_____"
                                  <<std::setw(9)<<"__|__"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(7)<<"|"<<"   |"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(9)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
//
                    if (k == 12) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(14) << LINE2
                                  << "——————————| Search by book id |——————————" << RESET
                                  << std::setw(17) << GREEN << "||" <<std::setw(56)<<
                                  "\033[1;4m"<<"———————————————————————————————"<<RESET<<GREEN<<"   ||"<< std::endl;
                    }
                }
            }
            for (int l = 0; l < 20; l++) {
                if(l==0)
                    std::cout << RESET << GREEN << LINE1 << "||  ";
                std::cout << GREEN << "\033[1;4m" << "———";
                if (l == 19)
                    std::cout << RESET <<std::setw(54)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                              GREEN<<"\033[1;1m ENTER YOUR BOOK ID: "<<std::setw(14)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
            }
        }
    }

    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";

        if(i==37){
            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";
            if(!option.empty())
                option.clear();


            for(int i=0;i<2;i++) {
                std::getline(std::cin, option);
            }
        }


    }

    return  option;
}




std::string Screen::ifFound(){
    space<void>(50);

    std::cout<<RESET<<std::endl;

    std::cout << RESET << GREEN << LINE1 << "||  ";
    for (int i = 0; i < 51; i++) {
        if (i == 25) {
            for (int j = 0; j < 20; j++) {

                std::cout << GREEN << "\033[1;4m" << "———";
                if(j==19)
                    std::cout<<RESET<<GREEN<<std::setw(92)<<"\033[1;1m||";
            }
            std::cout <<std:: endl;

            for (int k = 0; k < 31; k++) {
                if (k % 2 == 0) {
                    if (k == 0) {
                        std::cout << RESET << GREEN << LINE1 << "|| "<<" ||" << std::setw(16) <<LINE2<<
                                  "\033[1;1m"<< "——————————|Your book found|——————————" << RESET<<
                                  std::setw(19) << GREEN << "||"
                                  <<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                                  std::setw(8) << GREEN << "||"<<std::setw(4)<<
                                  " ——————————————————————————————————————————————————————————————————————————————————"<<std::setw(3)<<"||" << std::endl;
                    }
                    if (k == 2) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) <<
                                  LINE<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET<<
                                  std::setw(8) << GREEN << "||"<<std::setw(10)<<"|"
                                  <<std::setw(18)<<"¯¯|¯¯"<<std::setw(6)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<"¯¯¯)"<<std::setw(6)
                                  <<"\\"<<"   /"<<std::setw(12)<<
                                  "||" << std::endl;
                    }
                    if (k == 4) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(16) <<LINE

                                  << "——————————| Get book Name |——————————" << RESET

                                  << std::setw(19) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"   )"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"___|"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(7)<<"\\"<<" /"
                                  <<std::setw(13)<<"||" << std::endl;
                    }
                    if (k == 6) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE

                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(12)<<"|"
                                  <<std::setw(8)<<"|"<<"¯¯¯)"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(8)<<"|"<<"¯¯¯|"
                                  <<std::setw(6)<<"|"<<" \\"
                                  <<std::setw(10)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 8) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(15) << LINE
                                  << "——————————| Get book author |——————————" << RESET
                                  << std::setw(18) << GREEN << "||"
                                  <<std::setw(10)<<"|"<<"_____"
                                  <<std::setw(9)<<"__|__"
                                  <<std::setw(6)<<"|"<<"___)"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(7)<<"|"<<"   |"
                                  <<std::setw(6)<<"|"<<"  \\"
                                  <<std::setw(9)<<"|"
                                  <<std::setw(14)<<"||" << std::endl;
                    }
                    if (k == 10) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(4)<<" ——————————————————————————————————————————————————————————————————————————————————"
                                  <<std::setw(3)<<"||" << std::endl;
                    }
//
                    if (k == 12) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(17) << LINE
                                  << "——————————| Get book id |——————————" << RESET
                                  << std::setw(20) << GREEN << "||" <<std::setw(85)<<
                                  RESET<<GREEN<<"   ||"<< std::endl;
                    }
                    if (k == 14) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 16) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(15) << LINE
                                  << "——————————| Get book price |——————————" << RESET
                                  << std::setw(19) << GREEN << "||"
                                  <<std::setw(50)<<"||"<<LINE

                                << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  <<std::setw(1)<<
                                  RESET<<GREEN<<"||"<< std::endl;
                    }
                    if (k == 18) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"
                                  <<std::setw(50)<<"||"
                                    <<std::setw(9)<<LINE
                                    <<"—————————| Back |—————————(-1)"
                                  <<std::setw(5)<<RESET<<GREEN<<"||" << std::endl;
                    }

                    if (k == 20) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(15) << LINE
                                  << "——————————| Get book pages |——————————" << RESET
                                  << std::setw(19) << GREEN << "||"
                                  <<std::setw(50)<<"||"<<LINE
                                << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET


                                  <<std::setw(1)<<
                                  RESET<<GREEN<<"||"<< std::endl;
                    }

                    if (k == 22) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 24) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(16) << LINE
                                  << "——————————| Get all data |——————————" << RESET
                                  << std::setw(20) << GREEN << "||" <<std::setw(85)<<
                                  RESET<<GREEN<<"   ||"<< std::endl;
                    }
                    if (k == 26) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                    } if (k == 28) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(7) << LINE
                                  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET
                                  << std::setw(8) << GREEN << "||"<<std::setw(86)<<"||" << std::endl;
                    }
                    if (k == 30) {
                        std::cout << RESET << GREEN << LINE1 << "|| " <<" ||"<< std::setw(16) << LINE
                                  << "——————————| Buy this book |——————————" << RESET
                                  << std::setw(19) << GREEN << "||" <<std::setw(56)<<
                                  "\033[1;4m"<<"———————————————————————————————"<<RESET<<GREEN<<"   ||"<< std::endl;
                    }
                }
            }
            for (int l = 0; l < 20; l++) {
                if(l==0)
                    std::cout << RESET << GREEN << LINE1 << "||  ";
                std::cout << GREEN << "\033[1;4m" << "———";
                if (l == 19)
                    std::cout << RESET <<std::setw(54)<<RESET<< GREEN << "\033[1;7m" << "|"<<RESET<<
                              GREEN<<"\033[1;1m ENTER WHAT YOU WANT TO KNOW:"<<std::setw(0)<< "\033[1;7m" << "|"<<RESET<<GREEN<<LINE1<<"\033[1;4m___||"<<std::endl;
            }
        }
    }

    for(int i=0;i<38;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";

        if(i==37){
            std::cout<< GREEN <<"\033[1;7m" <<"|"<<RESET<<" ";
            std::cin>>option;
        }

    }

    return  option;
}



static int count =0;
std::vector<std::string> Screen::inserting() {
    std::string d;
    std::string d2;
    std::string d3;

    std::vector<std::string> database;
    space<void>(23);
    std::cout << "\n";
    std::cout << RESET << GREEN << LINE1 << "||\033[1;3m" << std::setw(44) << "Inserting new card..." << std::setw(25)
              << RESET << GREEN << "\033[1;1m||";
    std::cout << "\n";
    space<void>(23);
    std::cout << "\n";
    space<void>(23);
    std::cout << "\n";

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            if (i == 0) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter your card number: ";
                if (count == 0) {
                    for (int i = 0; i < 2; i++) {
                        std::getline(std::cin, d);
                        count++;
                    }
                } else {
                    std::getline(std::cin, d);
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }
            if (i == 0) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;1m"
                          << "•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••||\n";

            }
            if (i == 2) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter your card thru date: ";
                std::getline(std::cin, d2);
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));

            }

            if (i == 2) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;1m"
                          << "•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••||\n";
            }
            if (i == 4) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter card holder name: ";
                std::getline(std::cin, d3);
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }
        }
    }
    space<void>(23);

    std::cout << "\n";
    if (std::any_of(d.begin(), d.end(), ::isalpha)) {
        std::cout << "\033[1;31m Card number cannot contain letters!!!\n";
        inserting();
    }

    if ( [&d]() {int count = 0;for (char c : d) {if (isdigit(c)) {count++; }}return count;}() != 16){
        std::cout<<"\033[1;31m Card  number has to be 16 digits!!!\n";inserting();
    }
    if((d2.length() >= 6 ||isalpha(d2[0]) || isalpha(d2[1]) || isalpha(d2[3]) || isalpha(d2[4]))){
        std::cout<<"\033[1;31m Card thru date cannot contain letters!!!\n";
        std::cout<<"\033[1;31m Please write on this sequence (month/year)!!!\n";
        inserting();

    }
    if(!(isdigit(d2[0])&&isdigit(d2[1])&&d2[2]=='/'&&isdigit(d2[3])&&isdigit(d2[4]))){
        std::cout<<"\033[1;31m Please write on this sequence (month/year)!!!\n";
        inserting();

    }

    if(!((0<=d2[0]<=1)&&(d2[1]>=0))){
        std::cout<<"\033[1;31m Please write on this sequence (month/year)!!!\n";
        inserting();
    }
    if(std::any_of(d3.begin(),d3.end(),::isdigit)){
        std::cout<<"\033[1;31m Card holder's name cannot contain number!!!\n";
        inserting();
    }
    if(islower(d3[0])){
        std::cout<<"\033[1;31m Card holder's name should start with uppercase!!!\n";
        inserting();
    }
    if(!database.empty())
        database.clear();

    database.push_back(d);
    database.push_back(d3);
    database.push_back(d2);

    return database;
}





void Screen::thank() {


    space<void>(50);

    std::cout<<RESET<<std::endl;

    for(int i=0;i<51;i++){
        if(i==25) {
            std::cout << RESET << GREEN << LINE1 << "||\033[1;3m" << std::setw(85)
                      << "Thank you for choosing our library"
                      << RESET << GREEN << std::setw(67) << LINE1 << "||" << std::endl;

            std::cout << RESET << GREEN << LINE1 << "||\033[1;3m" << std::setw(91)
                      << "Our assistants will contact you within a day";
        }
        if(i>49) {
            std::cout << RESET << GREEN << std::setw(61) << LINE1 << "||" << std::endl;
        }

    }
    space<void>(50);


    std::cout<<"\n";
//    std::cout<<show1();
    system("clear");
}





static int count2 =0;

std::vector<std::string> Screen::insertingNewBook() {
    std::string d;
    std::string d2;
    std::string d3;
    std::string d4;
    std::string d5;
    std::string d6;
    std::vector<std::string> database;
    space<void>(23);
    std::cout << "\n";
    std::cout << RESET << GREEN << LINE1 << "||\033[1;3m" << std::setw(44) << "Inserting new book..." << std::setw(25)
              << RESET << GREEN << "\033[1;1m||";
    std::cout << "\n";
    space<void>(23);
    std::cout << "\n";
    space<void>(23);
    std::cout << "\n";

    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            if (i == 0) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter book id: ";
                        std::getline(std::cin, d);

                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }
            if (i == 0) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;1m"
                          << "•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••||\n";

            }
            if (i == 2) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter book name: ";
                std::getline(std::cin, d2);
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));

            }

            if (i == 2) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;1m"
                          << "•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••||\n";
            }
            if (i == 4) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter book author: ";
                std::getline(std::cin, d3);
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }
            if (i == 4) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;1m"
                          << "•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••||\n";
            }
            if (i == 6) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter book release date: ";
                std::getline(std::cin, d4);
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }
            if (i == 6) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;1m"
                          << "•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••||\n";
            }
            if (i == 8) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter book price: ";
                std::getline(std::cin, d5);
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }
            if (i == 8) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;1m"
                          << "•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••||\n";
            }
            if (i == 10) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;3m"
                          << "  Enter book pages: ";
                std::getline(std::cin, d6);
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }
            if (i == 10) {
                std::cout << RESET << GREEN << LINE1 << "||\033[1;1m"
                          << "•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••||\n";
            }
        }
    }
    space<void>(23);

    std::cout << "\n";

    if(!database.empty())
        database.clear();

    database.push_back(d);
    database.push_back(d2);
    database.push_back(d3);
    database.push_back(d4);
    database.push_back(d5);
    database.push_back(d6);


    return database;
}

int load(){

        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout<<"\b—"<<std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout<<"\b\\"<<std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout<<"\b|"<<std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout<<"\b/"<<std::flush;

}
void startInfo() {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    time_t tt = std::chrono::system_clock::to_time_t(now);

    tm *local_time = localtime(&tt);

    char buffer[80];
    strftime(buffer,sizeof(buffer),"%Y-%m-%d   %H:%M:%S  ",local_time);




auto dash=[](){
    for (int i = 0; i <50 ; i++) {
        std::cout<< "---";
    }
    return "-";};
    std::cout <<buffer <<"INFO  "<<std::rand()%99999<<dash()<<"Loading   "<<load()<<"00%\n";
}
void Screen::start(){
    std::cout<<GREEN;
    for(int i=0;i<10;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        startInfo();
    }
    display();
    Set set;
    set.choseOption();
    std::cout<<RESET;
}

