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

     std::string_view getCardNumber() ;

    bool setCardNumber( std::string_view cardNumber);

     std::string_view getCardValidThru() ;

    bool setCardValidThru( std::string_view cardValidThru);

     std::string_view getCardHolder() ;

    bool setCardHolder( std::string_view cardHolder);

     std::string_view getCardBalance() ;

    bool setCardBalance( std::string_view cardBalance);

private:
    template<class Set>auto set(auto card,auto place);
    template<class Get>auto get(auto card,auto cardTarget);
    std::string_view card_balance;
    std::string_view card_holder;
    std::string_view card_number;
    std::string_view card_valid_thru;
    std::string line;
    std::string field;
    std::fstream file;

};


#endif //UNTITLED22_TRANSACTIONS_H
