//
// Created by Abdulaxad on 11/04/24.
//

#ifndef UNTITLED22_VIEWS_H
#define UNTITLED22_VIEWS_H
#include <iostream>
class Views{
protected:
    virtual void display()=0;
    virtual void start()=0;
    virtual std::string show1()=0;
    virtual std::string show2()=0;
    virtual std::string show3()=0;
    virtual std::string show4()=0;
    virtual std::string bookStore()=0;
    virtual std::string bookStoreSearch()=0;
    virtual std::string bookStoreSearch2()=0;
    virtual std::string bookStoreSearch3()=0;
    virtual std::string ifFound()=0;
    virtual std::vector<std::string> inserting()=0;
};
#endif //UNTITLED22_VIEWS_H
