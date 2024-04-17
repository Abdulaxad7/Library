//
// Created by Abdulaxad on 16/04/24.
//
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include "Transactions.h"

static int i=1;
Transactions::Transactions() {
    file.open("CardData.csv",std::ios::in|std::ios::out|std::ios::app);
    if(!file.is_open()){
        std::cerr<<"Could not open file"<<std::flush;
    }
    file<<i<<", ";
    i++;
}


 std::string Transactions::getCardNumber()  {

     std::string line;
     std::getline(file, line);
file>>line;
    return line;
}



 std::string Transactions::getCardValidThru()  {
    return card_valid_thru;
}



 std::string Transactions::getCardHolder()  {

}

 std::string Transactions::getCardBalance()  {
     return card_balance;
}


bool Transactions::setCardBalance( std::string cardBalance) {
    this->card_balance = cardBalance;
    try{
        file<<cardBalance<<std::endl;
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardHolder( std::string cardHolder) {
    this->card_holder = cardHolder;
    try{
        file<<cardHolder<<", ";
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardValidThru( std::string cardValidThru) {
    this->card_valid_thru = cardValidThru;
    try{
        file<<cardValidThru<<", ";
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardNumber( std::string cardNumber) {
    this->card_number = cardNumber;
    try{
        file<<cardNumber<<", ";
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
Transactions::~Transactions() {
    if(file.is_open())
        file.close();
}