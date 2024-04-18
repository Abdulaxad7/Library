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
    card_balance="";
    card_holder="";
    card_number="";
    card_valid_thru="";

    fileForWrite.open("CardData.csv",std::ios::out|std::ios::app);
    fileForRead.open("CardData.csv",std::ios::in);

    if(!fileForWrite.is_open()||!fileForRead.is_open()){
        std::cerr<<"Could not open file"<<std::flush;
    }
    TransactionNumber++;
}

template<class Read> auto Transactions::get(auto target_search,auto targetNumber)-> decltype(target_search){
    if(std::getline(fileForRead,line)){
    }std::vector<std::string> founded;
    try {
    while(std::getline(fileForRead,line)) {

            std::stringstream stringstream(line);
            std::vector<std::string> fields;
            for (std::string field; std::getline(stringstream, field, ',');) {
                fields.push_back(field);

            }
            if (fields[targetNumber] == target_search) {
                founded.emplace_back(fields[targetNumber]);
                return fields[targetNumber];
            }


            if (!founded.empty()) {

                for (const std::string data: founded) {
                }
            } else {
                std::cerr << "\nNot found" << std::flush;
            }
        }
    }
    catch (const std::runtime_error&exception){
        return exception.what();
    }
}


std::string Transactions::getCardNumb() {
    return  get<std::string>(card_number,1);
}


 std::string Transactions::getCardValid()  {
    return get<std::string>(card_valid_thru,3);
}



 std::string Transactions::getCardHold()  {
    return get<std::string>(card_holder,2);
}

 std::string Transactions::getCardBalan()  {
     return get<std::string>(card_balance,4);
}



bool Transactions::setCardBalan() {

    std::srand(time(0));
    card_balance=std::to_string(rand()%9999);

    try{
        fileForWrite<<card_balance<<std::endl;
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardHold( std::string cardHolder) {
    this-> card_holder = cardHolder;
    try{
        fileForWrite<<cardHolder<<",";
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardValid( std::string cardValidThru) {
    this->card_valid_thru = cardValidThru;
    try{
        fileForWrite<<cardValidThru<<",";
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
bool Transactions::setCardNumb( std::string cardNumber) {
    this->card_number = cardNumber;
    try{
        fileForWrite<<TransactionNumber<<","<<cardNumber<<",";
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

