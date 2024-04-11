//
// Created by Abdulaxad on 10/04/24.
//

#ifndef UNTITLED22_CONNECT_H
#define UNTITLED22_CONNECT_H

#include <string>
#include <fstream>
class Connect{
private:
    std::string line;
    std::string field;
    std::fstream file;
public:
    explicit Connect();
    virtual ~Connect();
    std::vector<std::string> readId(std::string_view );
    std::vector<std::string> readPassword();
    std::vector<std::string> readName();
};


#endif //UNTITLED22_CONNECT_H

