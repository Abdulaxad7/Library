//
// Created by Abdulaxad on 16/04/24.
//
#include <iostream>
#include <sstream>
#include <vector>
#include "Transactions.h"

static int i=1;
Transactions::Transactions() {
    file.open("CardData.csv",std::ios::out|std::ios::in|std::ios::app);
    if(!file.is_open()){
        std::cerr<<"Could not open file"<<std::flush;
    }
}


template<class Get>auto Transactions::get(auto card,auto cardTarget){

//        std::stringstream stringstream(line);
////    std::cout<<"line"<<std::endl;
//    std::vector<std::string> fields;
//    for (std::string fiel; std::getline(stringstream, fiel, ',');) {
//        std::cout<<fiel<<std::endl;
//        fields.push_back(field);
//    }
//
//    return "we";
//    std::cout<<"line"<<std::endl;
//    while(std::getline(file,line)){
//        std::vector<std::string> fields;
//        for (std::string field; std::getline(stringstream, field, ',');) {
//            std::cout<<field<<std::endl;
//            fields.push_back(field);
//        }
//      if(fields[cardTarget]==card && !fields.empty()){
//          return fields[cardTarget];
//      }
//    }

    if (std::getline(file, line)) {
std::cout<<"sd"<<std::endl;
    }

        return "we";
//        if (!fields.empty() && fields[target_page] == target_search) {
//            founded = fields;
//            break;
//        }

//    if (!founded.empty()) {
//        for (const std::string& data : founded) {
//        }
//    } else {
//        std::cerr<<"Not found"<<std::flush;
//    }



}
template<class Set>auto Transactions::set(auto card,auto place){
    try{
        file<<i<<",";
        i++;
        file<<card;
        if(place<=3&&place>=0)
        file<<",";
        if(place==4)
            file<<"\n";
        return true;
    }catch (const std::exception&exception){
        return false;
    }
}
 std::string_view Transactions::getCardNumber()  {
   card_number=get<std::string>(card_number,1);
    return card_number;
}

bool Transactions::setCardNumber( std::string_view cardNumber) {
    this->card_number = cardNumber;
    if(set<void>(cardNumber,1))
        return true;
    return false;
}

 std::string_view Transactions::getCardValidThru()  {
     get<std::string>(card_valid_thru,3);
    return card_valid_thru;
}

bool Transactions::setCardValidThru( std::string_view cardValidThru) {
    this->card_valid_thru = cardValidThru;
    if(set<void>(cardValidThru,2))
        return true;
    return false;
}
std::string_view a;
 std::string_view Transactions::getCardHolder()  {
    a= get<std::string>(card_holder,2);
    return a;
}

bool Transactions::setCardHolder( std::string_view cardHolder) {
    this->card_holder = cardHolder;
    if(set<void>(cardHolder,3))
        return true;
    return false;
}

 std::string_view Transactions::getCardBalance()  {
     get<std::string>(card_balance,4);
     return card_balance;
}

bool Transactions::setCardBalance( std::string_view cardBalance) {
    this->card_balance = cardBalance;
    if(set<void>(cardBalance,4))
        return true;
    return false;
}

Transactions::~Transactions() {
    if(file.is_open())
        file.close();
}