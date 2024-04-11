//
// Created by Abdulaxad on 11/04/24.
//
#include <iostream>
#include "Screen.h"

const std::string GREEN = "\033[1;32m";
const std::string RESET = "\033[0m";
const std::string BLUE="\033[1;34m";
const std::string RED="\033[1;31m";
const std::string BG="\033[40m";
#include <iomanip>
#include <thread>


void Screen::welcome() {
    std::cout << GREEN <<std::setw(80)<<BG<< "\tW         W\t"<< "EEEEE \t"<< "  L     \t"<< "  CCCC \t\t"<< "  OOO  \t\t"<< "M         M\t\t"<< "EEEEE\t "<< RESET << std::endl;
    std::cout << GREEN <<std::setw(80)<<BG<< "\tW         W\t"<< "E     \t"<< "  L     \t"<< " C     \t\t"<< " O   O \t\t"<< "MM       MM\t\t"<< "E    \t "<< RESET << std::endl;
    std::cout << GREEN <<std::setw(80)<<BG<< "\tWW   W   WW\t"<< "EEEE  \t"<< "  L     \t"<< "C      \t\t"<< "O     O\t\t"<< "M M     M M\t\t"<< "EEEE \t "<< RESET << std::endl;
    std::cout << GREEN <<std::setw(80)<<BG<< "\tW  W   W  W\t"<< "E     \t"<< "  L     \t"<< " C     \t\t"<< " O   O \t\t"<< "M  M   M  M\t\t"<< "E    \t "<< RESET << std::endl;
    std::cout << GREEN <<std::setw(80)<<BG<< "\tW W     W W\t"<< "EEEEE \t"<< "  LLLLL \t"<< "  CCCC \t\t"<< "  OOO  \t\t"<< "M   M M   M\t\t"<< "EEEEE\t "<< RESET << std::endl;

    std::cout<< BLUE <<std::setw(108)<<BG<<"\tTTTTTTTTT\t"  << "  OOO  \t\t"<< RESET << std::endl;
    std::cout<< BLUE <<std::setw(108)<<BG<<"\t    T    \t"  << " O   O \t\t"<< RESET << std::endl;
    std::cout<< BLUE <<std::setw(108)<<BG<<"\t    T    \t"  << "O     O\t\t"<< RESET << std::endl;
    std::cout<< BLUE <<std::setw(108)<<BG<<"\t    T    \t"  << " O   O \t\t"<< RESET << std::endl;
    std::cout<< BLUE <<std::setw(108)<<BG<<"\t    T    \t"  << "  OOO  \t\t"<< RESET << std::endl;
     std::cout<<RED << std::setw(80)<<BG<<"\tL     \t"<< "  IIIII  \t"<< "  BBBBB  \t"<< "  RRRRR  \t"<< "    A    \t"<< "  RRRRR  \t"<< "Y     Y \t"<<RESET<<std::endl ;
     std::cout<<RED << std::setw(80)<<BG<<"\tL     \t"<< "    I    \t"<< "  B    B \t"<< "  R    R \t"<< "   A A   \t"<< "  R    R \t"<< " Y   Y  \t"<<RESET<<std::endl ;
     std::cout<<RED << std::setw(80)<<BG<<"\tL     \t"<< "    I    \t"<< "  BBBBB  \t"<< "  RRRRR  \t"<< "  AAAAA  \t"<< "  RRRRR  \t"<< "  Y Y   \t"<<RESET<<std::endl ;
     std::cout<<RED << std::setw(80)<<BG<<"\tL     \t"<< "    I    \t"<< "  B    B \t"<< "  R   R  \t"<< " A     A \t"<< "  R   R  \t"<< "   Y    \t"<<RESET<<std::endl ;
     std::cout<<RED << std::setw(80)<<BG<<"\tLLLLL \t"<< "  IIIII  \t"<< "  BBBBB  \t"<< "  R    R \t"<< "A       A\t"<< "  R    R \t"<< "   Y    \t"<<RESET<<std::endl ;


//        for (int i=0;i<101;i++) {
//            std::this_thread::sleep_for(std::chrono::milliseconds(250));
//
//            std::cout <<"\b\b"<<i<< std::flush;
//
//        }

}


void Screen::display() {


}
