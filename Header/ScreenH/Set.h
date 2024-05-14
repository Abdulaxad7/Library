//
// Created by Abdulaxad on 19/04/24.
//

#ifndef UNTITLED22_SET_H
#define UNTITLED22_SET_H


#include "../UserH/UserData.h"
#include "../UserH/Connect.h"
#include "../UserH/CreateAccount.h"
#include "../../Source/Source/Hash/Encryption.h"
#include "../BookH/Book.h"
#include "../BookH/Buy.h"
#include "../UserH/Administration.h"
#include "../BookH/BookData.h"
#include "../BookH/InsertBook.h"
#include "../UserH/Transactions.h"
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
