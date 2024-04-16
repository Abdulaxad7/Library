#include <iostream>
#include "UserData.h"
#include "Views.h"
#include "Screen.h"
#include "CreateAccount.h"
#include "InsertBook.h"
#include "Book.h"
#include "BookData.h"
int main() {
//       UserData data;
//   if( data.checkUserName("Abdulaxad Isroilov")){
//       std::cout<<"true";
//   }

//InsertBook insertBook;
//insertBook.setId("231490")->setName("C++ for Programmers")->setAuthor("James Stewart")->setDate("17/05/1990")->setPrice("$556")->setPages("2104");
//    CreateAccount createAccount;
//    createAccount.setId();
//    createAccount.setFullname("Abdulaxad Isroilov")->setEmail("abdulaxad.isroilov@in.emp.org")->setPassword("DKLJ@$2kj5welrkt236");


//    std::cout << "Hello, World!" << std::endl;

//Screen screen;
//screen.start();
Book book;
if(book.exist_by_book_id("654364"))
    std::cout<<"true"<<std::endl;
book.checkPrice();
book.checkAuthor();

    return 0;
}


