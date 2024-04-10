//
// Created by Abdulaxad on 10/04/24.
//

#ifndef UNTITLED22_CONNECT_H
#define UNTITLED22_CONNECT_H

#include <string>
#include <fstream>
class Connect{
public:
    explicit Connect();
    virtual ~Connect();
    std::vector<std::string> readId();
    std::string_view readPassword();
    std::string_view readName();

private:
    std::string column1;
    std::string column2;
    std::fstream file;

};


#endif //UNTITLED22_CONNECT_H

