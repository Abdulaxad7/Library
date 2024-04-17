//
// Created by Abdulaxad on 15/04/24.
//

#ifndef UNTITLED22_BUY_H
#define UNTITLED22_BUY_H



#include "Book.h"
#include "Transactions.h"
class Buy :Transactions{
    Transactions transactions;
    Book book;
    Buy();
    std::string cardValidThru;
    std::string cardNumber;

    std::string location;
    virtual ~Buy();
};


#endif //UNTITLED22_BUY_H
