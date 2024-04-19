//
// Created by Abdulaxad on 11/04/24.
//
#include <iostream>
#include <iomanip>
#include <ctime>
#include <thread>
#include "Screen.h"
#include <vector>

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
    std::cout<<show1();
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
            std::string s;
            std::string m;
            std::cin>>s;
            std::cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            std::cin>>m;

            data.emplace_back(s);
            data.emplace_back(m);

        }
    }



    return "";
}


std::string Screen::show3() {
    std::cout<<"Here 2"<<std::endl;

    return "";
}

std::string Screen::show4() {
    std::cout<<"Here 3"<<std::endl;

    return "";
}






















int Screen::load2(){
    for(;;){
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout<<"\b\b."<<std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout<<"\b\b.."<<std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        std::cout<<"\b\b..."<<std::flush;
}
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
    strftime(buffer, sizeof(buffer), "%Y-%m-%d   %H:%M:%S  ", local_time);




auto dash=[](){
    for (int i = 0; i <50 ; i++) {
        std::cout<< "---";
    }
    return "-";};
    std::cout <<buffer <<"INFO 43565 "<<dash()<<"Loading "<<load()<<"\n";

}
void Screen::start(){
    std::cout<<GREEN;
    for(int i=0;i<10;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        startInfo();
    }
    display();
    std::cout<<RESET;
}

