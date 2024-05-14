//
// Created by Abdulaxad on 15/04/24.
//

#ifndef UNTITLED22_BUY_H
#define UNTITLED22_BUY_H


#include "../UserH/Transactions.h"
#include "Book.h"
class Buy : private Transactions,private Book{
public:
    Buy* setCardValidThru(const std::string&);

    Buy* setCardNumber(const std::string&);

    Buy* setCardHolder(const std::string&);

    Buy* setCardBalance(const std::string&);

    bool getCardValidThru();

    bool getCardNumber();

    bool getCardBalance();

    Buy();
    virtual ~Buy()=default;
private:
    Book        book;
    std::string cardHolder;
    std::string cardValidThru;
    std::string cardNumber;
    std::string cardBalance;

};


#endif //UNTITLED22_BUY_H
