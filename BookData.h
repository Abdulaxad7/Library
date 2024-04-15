//
// Created by Abdulaxad on 15/04/24.
//

#ifndef UNTITLED22_BOOKDATA_H
#define UNTITLED22_BOOKDATA_H


#include <vector>

class BookData {
public:
    BookData();
    std::vector<std::string>check_by_book_id(std::string_view);
    std::vector<std::string>check_by_book_name(std::string_view);
    std::vector<std::string>check_by_book_author(std::string_view);

    virtual ~BookData();

private:
    template<class T>auto open_file();
    std::string_view book_id;
    std::string_view book_name;
    std::string_view book_author;
    std::string field;
    std::string line;
    std::fstream file;
};


#endif //UNTITLED22_BOOKDATA_H
