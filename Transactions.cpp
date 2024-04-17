//
// Created by Abdulaxad on 16/04/24.
//
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <exception>
#include "Transactions.h"

static int TransactionNumber=0;

Transactions::Transactions() {
    fileForWrite.open("CardData.csv",std::ios::out|std::ios::app);
    fileForRead.open("CardData.csv",std::ios::in);

    if(!fileForWrite.is_open()||!fileForRead.is_open()){
        std::cerr<<"Could not open file"<<std::flush;
    }
    TransactionNumber++;
}

template<class Read> auto Transactions::get(auto target_search,auto targetNumber)-> decltype(target_search){
    if(std::getline(fileForRead,line)){
    }
    while(std::getline(fileForRead,line)){
        try {
            std::stringstream stringstream(line);
            std::vector<std::string> fields;
            for (std::string field; std::getline(stringstream, field);) {
                fields.push_back(field);
            }
            if (!fields.empty() && fields[targetNumber] == target_search) {
                return fields[targetNumber];
            }
        }catch (const std::exception&exception){
            return exception.what();
        }
    }
}


std::string_view Transactions::getCardNumber() {

    return  get<std::string>(card_number,1);
}


 std::string_view Transactions::getCardValidThru()  {
    return get<std::string>(card_number,3);
}



 std::string_view Transactions::getCardHolder()  {
    return get<std::string>(card_number,2);
}

 std::string_view Transactions::getCardBalance()  {
     return get<std::string>(card_number,4);
}



bool Transactions::setCardBalance( std::string cardBalance) {
    this->card_balance = cardBalance;
    try{
        fileForWrite<<cardBalance<<std::endl;
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardHolder( std::string cardHolder) {
    this->card_holder = cardHolder;
    try{
        fileForWrite<<cardHolder<<", ";
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardValidThru( std::string cardValidThru) {
    this->card_valid_thru = cardValidThru;
    try{
        fileForWrite<<cardValidThru<<", ";
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardNumber( std::string cardNumber) {
    try{
        fileForWrite<<TransactionNumber<<", "<<cardNumber<<", ";
        this->card_number = cardNumber;
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
Transactions::~Transactions() {
    if(fileForWrite.is_open())
        fileForWrite.close();
    if(fileForRead.is_open())
        fileForRead.close();
}

