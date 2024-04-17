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

     std::string_view getCardBalance() ;

     std::string_view getCardHolder() ;

     std::string_view getCardNumber() ;

     std::string_view getCardValidThru() ;

    bool setCardNumber( std::string cardNumber);


    bool setCardValidThru( std::string cardValidThru);


    bool setCardHolder( std::string cardHolder);


    bool setCardBalance( std::string cardBalance);

private:
    template<class Read> auto get(auto target_search,auto targetNumber)-> decltype(target_search);
    std::string_view card_balance;
    std::string_view card_holder;
    std::string_view card_number;
    std::string_view card_valid_thru;
    std::string line;
    std::string field;
    std::ofstream fileForWrite;
    std::ifstream fileForRead;


};


#endif //UNTITLED22_TRANSACTIONS_H
