//
// Created by Abdulaxad on 19/04/24.
//

#ifndef UNTITLED22_SET_H
#define UNTITLED22_SET_H


#include "UserData.h"
#include "Connect.h"
#include "CreateAccount.h"
#include "Encryption.h"
#include "Book.h"
#include "Buy.h"
#include "Administration.h"
#include "BookData.h"
#include "InsertBook.h"
#include "Transactions.h"
#include "Screen.h"

class Set final : private Screen,private UserData,private CreateAccount{
public:
    void choseOption();

private:
    std::vector<std::string>copy;
    std::string option;
};

#endif //UNTITLED22_SET_H
