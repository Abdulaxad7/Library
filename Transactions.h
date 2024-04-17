//
// Created by Abdulaxad on 16/04/24.
//

#ifndef UNTITLED22_TRANSACTIONS_H
#define UNTITLED22_TRANSACTIONS_H

#include <sstream>
#include <fstream>
class Transactions {


public:
    Transactions();
    virtual ~Transactions();

     std::string getCardNumber() ;

    bool setCardNumber( std::string cardNumber);

     std::string getCardValidThru() ;

    bool setCardValidThru( std::string cardValidThru);

     std::string getCardHolder() ;

    bool setCardHolder( std::string cardHolder);

     std::string getCardBalance() ;

    bool setCardBalance( std::string cardBalance);

private:
    std::string card_balance;
    std::string card_holder;
    std::string card_number;
    std::string card_valid_thru;
    std::string line;
    std::string field;
    std::fstream file;

};


#endif //UNTITLED22_TRANSACTIONS_H
