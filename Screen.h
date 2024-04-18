//
// Created by Abdulaxad on 11/04/24.
//

#ifndef UNTITLED22_SCREEN_H
#define UNTITLED22_SCREEN_H


#include "Views.h"
class Screen final: public Views{
public:
    template<class A>auto space(auto x);
    void display() override;
    void start()  override;
    void show1();
};


#endif //UNTITLED22_SCREEN_H
