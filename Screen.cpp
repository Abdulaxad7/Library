//
// Created by Abdulaxad on 11/04/24.
//
#include <iostream>
#include "Screen.h"


#include <ctime>
#include <iomanip>
#include <thread>

std::string_view GREEN=  "\033[38;5;28m";
std::string_view RESET=  "\033[0m";
std::string_view BLUE=   "\033[34m";
std::string_view RED=    "\033[31m";
std::string_view BG=     "\033[40m";

void Screen::welcome() {


    std::cout<< GREEN <<std::setw(80)<< BG<<"\tW         W\t\t"<<"EEEEE \t"<<"  L     \t"<<"  CCCC \t\t"<<"  OOO  \t\t"<<"M         M\t\t"<<"EEEEE\t "<<RESET<<std::endl;
    std::cout<< GREEN <<std::setw(80)<< BG<<"\tW         W\t\t"<<"E     \t"<<"  L     \t"<<" C     \t\t"<<" O   O \t\t"<<"MM       MM\t\t"<<"E    \t "<<RESET<<std::endl;
    std::cout<< GREEN <<std::setw(80)<< BG<<"\tWW   W   WW\t\t"<<"EEEE  \t"<<"  L     \t"<<"C      \t\t"<<"O     O\t\t"<<"M M     M M\t\t"<<"EEEE \t "<<RESET<<std::endl;
    std::cout<< GREEN <<std::setw(80)<< BG<<"\tW  W   W  W\t\t"<<"E     \t"<<"  L     \t"<<" C     \t\t"<<" O   O \t\t"<<"M  M   M  M\t\t"<<"E    \t "<<RESET<<std::endl;
    std::cout<< GREEN <<std::setw(80)<< BG<<"\tW W     W W\t\t"<<"EEEEE \t"<<"  LLLLL \t"<<"  CCCC \t\t"<<"  OOO  \t\t"<<"M   M M   M\t\t"<<"EEEEE\t "<<RESET<<std::endl;
    std::cout<< BLUE  <<std::setw(108)<<BG<<"\tTTTTTTTTT\t"<<"  OOO  \t\t"<<RESET<< std::endl;
    std::cout<< BLUE  <<std::setw(108)<<BG<<"\t    T    \t"<<" O   O \t\t"<<RESET<< std::endl;
    std::cout<< BLUE  <<std::setw(108)<<BG<<"\t    T    \t"<<"O     O\t\t"<<RESET<< std::endl;
    std::cout<< BLUE  <<std::setw(108)<<BG<<"\t    T    \t"<<" O   O \t\t"<<RESET<< std::endl;
    std::cout<< BLUE  <<std::setw(108)<<BG<<"\t    T    \t"<<"  OOO  \t\t"<<RESET<< std::endl;
    std::cout<< RED   <<std::setw(80)<< BG<<"\tL     \t"<<"  IIIII    \t"<<"  BBBBB   \t"<<"  RRRRR  \t"<<"       A     \t"<<"  RRRRR  \t"<< "Y     Y \t"<<RESET<<std::endl;
    std::cout<< RED   <<std::setw(80)<< BG<<"\tL     \t"<<"    I      \t"<<"  B    B  \t"<<"  R    R \t"<<"      A A    \t"<<"  R    R \t"<< " Y   Y  \t"<<RESET<<std::endl;
    std::cout<< RED   <<std::setw(80)<< BG<<"\tL     \t"<<"    I      \t"<<"  BBBBB   \t"<<"  RRRRR  \t"<<"     AAAAA   \t"<<"  RRRRR  \t"<< "  Y Y   \t"<<RESET<<std::endl;
    std::cout<< RED   <<std::setw(80)<< BG<<"\tL     \t"<<"    I      \t"<<"  B    B  \t"<<"  R   R  \t"<<"    A     A  \t"<<"  R   R  \t"<< "   Y    \t"<<RESET<<std::endl;
    std::cout<< RED   <<std::setw(80)<< BG<<"\tLLLLL \t"<<"  IIIII    \t"<<"  BBBBB   \t"<<"  R    R \t"<<"   A       A \t"<<"  R    R \t"<< "   Y    \t"<<RESET<<std::endl;

}


void Screen::display() {
    for(int i=0;i<50;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";
    }
    std::cout<<RESET<<std::endl;

    for(int i=0;i<51;i++){
        if(i==25)
            std::cout<<RESET<< GREEN  <<"\033[1;1m"<< "||\033[1;3m" <<std::setw(85)<<"BASIC LIBRARY";
        if(i>49) {
            if(i==50)
                std::cout << RESET << GREEN << std::setw(68) <<"\033[1;1m"<< "||" << std::endl;

        }

    }

    for(int i=0;i<50;i++){
        std::cout<< GREEN <<"\033[1;4m" <<"———";
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
