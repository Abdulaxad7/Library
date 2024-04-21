//
// Created by Abdulaxad on 11/04/24.
//

#ifndef UNTITLED22_SCREEN_H
#define UNTITLED22_SCREEN_H


#include "Views.h"
#include <vector>
#include <iostream>

class Screen : private Views{
public:
    std::vector<std::string>data;
    template<class A>auto space(auto x)->void ;
    void display() override;
    void start()  override;
    std::string show1()override;
    std::string show2()override;
    std::string show3()override;
    std::string show4()override;
    std::string bookStore()override;
    std::string  bookStoreSearch()override;
     std::string  bookStoreSearch2()override;
     std::string  bookStoreSearch3()override;
    std::string ifFound()override;
    int load2();

private:
    std::string option;
};


#endif //UNTITLED22_SCREEN_H
