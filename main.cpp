#include <iostream>
#include "UserData.h"
#include "Views.h"
#include "Screen.h"
#include "CreateAccount.h"
#include "InsertBook.h"
#include "Book.h"
#include "BookData.h"
#include "Administration.h"
#include "Transactions.h"
int main() {
//       UserData data;
//   if( data.checkUserName("Abdulaxad Isroilov")){
//       std::cout<<"true";
//   }

//InsertBook insertBook;
//insertBook.setId("231490")->setName("C++ for Programmers")->setAuthor("James Stewart")->setDate("17/05/1990")->setPrice("$556")->setPages("2104");
//    CreateAccount createAccount;
//    createAccount.setId();
//    createAccount.setFullname("Abdulaxad Isroilov")->setEmail("abdulaxad.isroilov@in.emp.org")->setPassword("AbdulaxadIsroilov");


//    std::cout << "Hello, World!" << std::endl;

//Screen screen;
//screen.start();
//Book book;
//if(book.exist_by_book_id("654364"))
//    std::cout<<"true"<<std::endl;
//book.checkPrice();
//book.checkAuthor();
//Administration administration;
//if(administration.check_password("AbdulaxadIsroilov"))
//    std::cout<<"true"<<std::endl;
Transactions transactions;
transactions.setCardNumber("1234 5678 9000 0000");
transactions.setCardHolder("Abdulaxad Isroilov");
transactions.setCardValidThru("11/34");
transactions.setCardBalance("$1000");

std::cout<<transactions.getCardHolder();


    return 0;
}


