//
// Created by Abdulaxad on 15/04/24.
//
#ifndef UNTITLED22_INSERTBOOK_H
#define UNTITLED22_INSERTBOOK_H


class InsertBook {
public:
    InsertBook();

    InsertBook(std::string_view ,std::string_view ,std::string_view ,std::string_view,std::string_view,std::string_view );

    InsertBook* setId( std::string_view );

    InsertBook* setName( std::string_view );

    InsertBook* setAuthor( std::string_view );

    InsertBook* setDate( std::string_view );

    InsertBook* setPrice( std::string_view );

    InsertBook* setPages( std::string_view );

    virtual ~InsertBook();

private:
    template<class T>auto open_file();
    std::string_view id;
    std::string_view name;
    std::string_view author;
    std::string_view date;
    std::string_view price;
    std::string_view pages;

    std::fstream file;
};


#endif //UNTITLED22_INSERTBOOK_H
