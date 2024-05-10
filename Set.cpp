//
// Created by Abdulaxad on 19/04/24.
//
#include <iostream>
#include "Set.h"
#include <thread>

void Set::choseOption(){
         std::string option;
        option=Screen::show1();
        if(option=="1"||option=="Login"||option=="login"||option=="LogIn") {
            std::cout<<show2();
            std::vector<std::string>copy;
            copy=data;
            data.clear();
            if(UserData::checkUserName(copy[0])&&UserData::checkUserPassword(copy[1])){
                if(!option.empty())
                    option.clear();
                           choseOption2();
                        }else{
                            std::cout<<"\033[1;31m Username or password is incorrect!!!\n";
                            choseOption();
                        }
        }
        if(option=="3"||option=="admin"||option=="Admin"){
        func();
        }
        if(option=="2"||option=="CreateAccount"||option=="Createaccount"||option=="createaccount"){
            func1();
        }
       else{
            std::cout<<"\033[1;31m Wrong choice!!!\n";
            system("clear");
           choseOption();
       }
}
void Set::func(){
            std::cout<<show4();
    std::vector<std::string>copy;
    copy=data;
            if(Administration::check_id(copy[0])&&Administration::check_password(copy[1])){
               std::vector<std::string>data= insertingNewBook();
               InsertBook insertBook;
               insertBook.setId(data[0])->setName(data[1])->setAuthor(data[2])->setDate(data[3])->setPrice(data[4])->setPages(data[5]);
                std::cout<<"\n\033[38;5;28mPlease wait for some time.\nInserting new book"<<"  "<<load()<<"\n\n";
                func();
            }
            else{
                std::cout<<"\033[1;31m Username or password is incorrect!!!\n";
                choseOption();
            }
}

void Set::func1(){
    std::cout<<show3();
    std::vector<std::string>copy;
    copy=data;
                try {
                    CreateAccount account;
                   account.setId()->setFullname(copy[0])->setEmail(copy[1])->setPassword(copy[2]);
                    std::cout<<"success"<<std::endl;
                    if(!copy.empty())
                        copy.clear();
                    if(!data.empty())
                        data.clear();
                    choseOption();
                }
                    catch (const std::runtime_error&error){
                        choseOption();
                    }
}
void Set::choseOption2(){
    option=Screen::bookStore();
    if(option=="1"||option=="searchbybookname"||option=="bookname"){
        func2();
    }
    if(option=="2"||option=="searchbybookauthor"||option=="bookauthor"){
        func3();
    }
    if(option=="3"||option=="searchbybookid"||option=="bookid"){
        func4();
    }
    else{
        std::cout<<"\n\033[1;31m Wrong choice!!!\n";choseOption2();
    }
}
int Set::load(){
for(int i=0;i<15;i++) {
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    std::cout << "\b—" << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    std::cout << "\b\\" << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    std::cout << "\b|" << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    std::cout << "\b/" << std::flush;
}
}


void Set::func2(){
    std::string search;
    search= bookStoreSearch();
    std::cout<<"\n\033[38;5;28m Please wait for some time.\n Searching book named: "<<search<<"  "<<load();
     if(book.exist_by_book_name(search)){
         std::cout<<"\n\n";
        func5();
     }
     else{
         std::cout<<"\n\033[1;31m We are sorry, but currently we do not have book named: "<<search<<"\n"<<std::endl;
         search.clear();
         choseOption2();
     }
}


void Set::func3() {
    std::string search;
    search = bookStoreSearch2();
    std::cout<<"\n\033[38;5;28m Please wait for some time.\n Searching book written by: "<<search<<"   "<<load();
    if (book.exist_by_book_author(search)) {
std::cout<<"\n\n";
        func5();
    }
    else{
        std::cout<<"\n\033[1;31m We are sorry, but currently we do not have book written by: "<<search<<"\n"<<std::endl;
        search.clear();
        choseOption2();
    }
}


void Set::func4(){
    std::string search;
    search=bookStoreSearch3();
    std::cout<<"\n\033[38;5;28m Please wait for some time.\n Searching book with id: "<<search<<"   "<<load();
    if(book.exist_by_book_id(search)){
        std::cout<<"\n\n";
        func5();
    }
    else{
        std::cout<<"\n\033[1;31m We are sorry, but currently we do not have book with id: "<<search<<"\n"<<std::endl;
        search.clear();
        choseOption2();
    }
}


void Set::func5(){
    std::string search;
   search= ifFound();

   if(search=="1"||search.contains("Get book Name")||search.contains("GetbookName")||search.contains("getbookname")){
       std::cout<<"\n\033[38;5;28m The book name is: "<<book.checkBookName()<<"\n";
       std::this_thread::sleep_for(std::chrono::milliseconds(5000));
       func5();
   }
    else if(search=="2"||search.contains("Get book author")||search.contains("Getbookauthor")||search.contains("getbookauthor")){
        std::cout<<"\n\033[38;5;28m This book was written by: "<<book.checkAuthor()<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));

        func5();
    }
   else if(search=="3"||search.contains("Get book id")||search.contains("Getbookid")||search.contains("getbookid")){
        std::cout<<"\n\033[38;5;28m This book's id: "<<book.checkId()<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));

        func5();
    }
   else if(search=="4"||search.contains("Get book price")||search.contains("Getbookprice")||search.contains("getbookprice")){
        std::cout<<"\n\033[38;5;28m This book's price: "<<book.checkPrice()<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));

        func5();

    }
   else if(search=="5"||search.contains("Get book pages")||search.contains("Getbookpages")||search.contains("getbookpages")){
        std::cout<<"\n\033[38;5;28m This book contains : "<<book.checkPages()<<" pages."<<"\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
        func5();

    }
   else if(search=="6"||search.contains("Get all data")||search.contains("Getalldata")||search.contains("getalldata")){
        std::cout<<"\n\033[38;5;28m"<<book;
        std::cout<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));

        func5();
    }
   else if(search=="7"||search.contains("Buy this book")||search.contains("buythisbook")||search.contains("Buythisbook")){
        std::cout<<std::endl;
        std::cout<<"\033[38;5;28m Checking saved cards by your name   "<<load();
        func6();

    }
   else if(search=="-1"||search.contains("back")||search.contains("Back")){
        std::cout<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(8000));
        func5();

    }
    else{
        std::cout<<"\n\033[1;31m Wrong choice!!!\n";func5();
    }
}


void Set::func6(){
    std::vector<std::string>database;
    std::cout<<"\033[1;31m\nThere not found card with your name on our server.\n";
   database= inserting();

   if(transactions.setCardNumb(database[0])||transactions.setCardHold(database[1])||transactions.setCardValid(database[2])||transactions.setCardBalan()){
       thank();
       std::this_thread::sleep_for(std::chrono::milliseconds(13000));
       for(int i=0;i<30;i++){
           std::cout<<"\n";
       }
       choseOption2();
   }

}


















