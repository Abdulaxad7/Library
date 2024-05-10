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

class Set  : private Screen,private UserData,private CreateAccount,private Administration,private Book,private Transactions{
public:
    void choseOption();

    void choseOption2();

private:

    Book book;
    Transactions transactions;
    void func();
    void func1();
    void func2();
    void func3();
    void func4();
    void func5();
    void func6();
    int load();
    std::string option;
};

#endif //UNTITLED22_SET_H
