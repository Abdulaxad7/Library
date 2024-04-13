//
// Created by Abdulaxad on 11/04/24.
//

#ifndef UNTITLED22_ENCRYPTION_H
#define UNTITLED22_ENCRYPTION_H


class Encryption {
protected:
    static std::string encHashPass(std::string_view );
    static bool decHashPass(std::string_view );
    virtual ~Encryption()=default;
};


#endif //UNTITLED22_ENCRYPTION_H
