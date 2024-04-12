#include <iostream>
#include "UserData.h"
#include "Screen.h"
#include "CreateAccount.h"
int main() {

    UserData data;
   if( data.checkUserPassword("asbdfk1234roietjqlkrelkj")){
       std::cout<<"true";
   }

//    CreateAccount createAccount;
//    std::cout<<createAccount.setId();
//    createAccount.setFullname("Abdulaxad Isroilov");
//    createAccount.setEmail("abdulaxad@gmail.com");
//    createAccount.setPassword("asbdfk1234roietjqlkrelkj");


//    std::cout << "Hello, World!" << std::endl;

//Screen screen;
//screen.start();


    return 0;
}

