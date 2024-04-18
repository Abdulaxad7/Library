//
// Created by Abdulaxad on 11/04/24.
//
#include <iostream>
#include "Screen.h"
#include <iomanip>

#include <ctime>
#include <thread>

std::string_view GREEN=  "\033[38;5;28m";
std::string_view RESET=  "\033[0m";
template<class A>auto Screen::space(auto x){
    for(int i=0;i<x;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";
    }
}



void Screen::display() {
    space<void>(50);

    std::cout<<RESET<<std::endl;

    for(int i=0;i<51;i++){
        if(i==25)
            std::cout<<RESET<< GREEN  <<"\033[1;1m"<< "||\033[1;3m" <<std::setw(85)<<"BASIC LIBRARY";

        if(i>49) {
            if(i==50)
                std::cout << RESET << GREEN << std::setw(68) <<"\033[1;1m"<< "||" << std::endl;

        }

    }
    space<void>(50);

    std::cout<<"\n";
    show1();
    system("clear");
}



int flow(int a){
    if(a==3)
        3;
}

using namespace std;
void Screen::show1(){

    space<void>(50);

    std::cout<<RESET<<std::endl;



//        std::cout << RESET << GREEN << "\033[1;1m" << "||";
        for (int i = 0; i < 51; i++) {
            if (i == 25) {
                for (int i = 0; i < 20; i++) {

                    std::cout << GREEN << "\033[1;4m" << "———";

                }
                cout << endl;

                for (int i = 0; i < 19; i++) {
                    if (i % 2 == 0) {
                        if (i == 0) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(14) << "\033[1;3m"

                                      << "——————————| Welcome to LIBRARY |——————————" << RESET

                                      << std::setw(16) << GREEN << "||" << std::endl;
                        }
                        if (i == 2) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(7) << "\033[1;3m"

                                      << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                      << std::setw(8) << GREEN << "||" << std::endl;
                        }
                        if (i == 2) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(7) << "\033[1;3m"

                                      << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                      << std::setw(8) << GREEN << "||" << std::endl;
                        }
                        if (i == 4) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(19) << "\033[1;3m"

                                      << "——————————| Log In |——————————" << RESET

                                      << std::setw(23) << GREEN << "||" << std::endl;
                        }
                        if (i == 6) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(7) << "\033[1;3m"

                                      << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                      << std::setw(8) << GREEN << "||" << std::endl;
                        }
                        if (i == 8) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(15) << "\033[1;3m"

                                      << "——————————| Create Account |——————————" << RESET

                                      << std::setw(19) << GREEN << "||" << std::endl;
                        }
                        if (i == 10) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(7) << "\033[1;3m"

                                      << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                      << std::setw(8) << GREEN << "||" << std::endl;
                        }
                        if (i == 10) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(7) << "\033[1;3m"

                                      << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << RESET

                                      << std::setw(8) << GREEN << "||" << std::endl;
                        }

                        if (i == 12) {
                            std::cout << RESET << GREEN << "\033[1;1m" << "||" << std::setw(19) << "\033[1;3m"

                                      << "——————————| Admin |——————————" << RESET

                                      << std::setw(24) << GREEN << "||" << std::endl;
                        }
                    }
                }
                for (int i = 0; i < 20; i++) {
                    std::cout << GREEN << "\033[1;4m" << "———";
                    if (i == 19)
                        cout << endl;
                }

            }


        }




    space<void>(50);
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
