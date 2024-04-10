#include <iostream>
#include "UserData.h"
#include "CreateAccount.h"
int main() {

    UserData data;
   if( data.checkUserId("94514107")){
       std::cout<<"true";
   }

//    CreateAccount createAccount;
//    createAccount.setId();
//    createAccount.setFullname("Abdulaxad");
//    createAccount.setEmail("abdulaxad@gmail.com");
//    createAccount.setPassword("1234qwerqwer");


//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
