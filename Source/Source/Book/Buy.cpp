//
// Created by Abdulaxad on 15/04/24.
//
#include <iostream>
#include "../../../Header/UserH/Transactions.h"
#include "../../../Header/BookH/Buy.h"


Buy::Buy() {

}


bool Buy::getCardValidThru() {
  try{
      cardValidThru=getCardValid();
      return true;
  }catch(const std::runtime_error&exception){
      std::cout<<exception.what();
  }
  return false;
}

bool Buy::getCardNumber() {
    try{
        cardNumber=getCardNumb();
        return true;
    }catch(const std::runtime_error&exception){
        std::cout<<exception.what();
    }
    return false;
}

bool Buy::getCardBalance() {
    try{
        cardBalance=getCardBalan();
        return true;
    }catch(const std::runtime_error&exception){
        std::cout<<exception.what();
    }
    return false;
}

Buy* Buy::setCardValidThru(const std::string &cardValidThru) {
    this->cardValidThru = cardValidThru;
    setCardValid(cardValidThru);

    return this;
}

Buy* Buy::setCardNumber(const std::string &cardNumber) {
    this->cardNumber = cardNumber;
    setCardNumb(cardNumber);
    return this;
}

Buy* Buy::setCardBalance(const std::string &cardBalance) {
    this->cardBalance = cardBalance;
    setCardBalan();
    return this;
}

Buy *Buy::setCardHolder(const std::string &cardHolder) {
    this->cardHolder=cardHolder;
    setCardHold(cardHolder);
    return this;
}

