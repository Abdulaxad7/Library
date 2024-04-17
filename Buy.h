//
// Created by Abdulaxad on 15/04/24.
//

#ifndef UNTITLED22_BUY_H
#define UNTITLED22_BUY_H



#include "Book.h"
#include "Transactions.h"
class Buy :private Transactions,private Book{
public:
    Buy();
    virtual ~Buy();
private:
    Transactions transactions;
    Book book;

    std::string cardValidThru;
    std::string cardNumber;

    std::string location;

};


#endif //UNTITLED22_BUY_H
