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

public:
     std::string getCardBalan() ;

     std::string getCardHold() ;

     std::string getCardNumb() ;

     std::string getCardValid() ;

    bool setCardBalan();

    bool setCardNumb( std::string );


    bool setCardValid(  std::string );


    bool setCardHold( std::string );


private:
    template<class Read> auto get(auto target_search,auto targetNumber)-> decltype(target_search);
    std::string card_balance;
    std::string card_holder;
    std::string card_number;
    std::string card_valid_thru;
    std::string line;
    std::string field;
    std::ofstream fileForWrite;
    std::ifstream fileForRead;


};


#endif //UNTITLED22_TRANSACTIONS_H
