//
// Created by Abdulaxad on 15/04/24.
//

#ifndef UNTITLED22_BOOKDATA_H
#define UNTITLED22_BOOKDATA_H


#include <vector>

class BookData {
protected:
    BookData();
    std::vector<std::string>check_by_book_id(std::string_view);
    std::vector<std::string>check_by_book_name(std::string_view);
    std::vector<std::string>check_by_book_author(std::string_view);

    virtual ~BookData();

private:
    template<class _Search>auto search(auto target_search,auto target_page);
    template<class _Open_File>auto open_file();
    std::string_view book_id;
    std::string_view book_name;
    std::string_view book_author;
    std::vector<std::string> all;
    std::vector<std::string> founded;
    std::string field;
    std::string line;
    std::fstream file;
};


#endif //UNTITLED22_BOOKDATA_H
