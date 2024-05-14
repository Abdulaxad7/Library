cmake_minimum_required(VERSION 3.27)
project(untitled22)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled22 main.cpp
        Header/UserH/UserData.h
        Source/Source/User/UserData.cpp
        Header/UserH/Connect.h
        Source/Source/User/Connect.cpp
        Source/Source/User/Connect.cpp
        Header/UserH/CreateAccount.h
        Source/Source/User/CreateAccount.cpp
        Source/Source/Hash/Encryption.h
        Source/Source/Hash/Encryption.cpp
        Header/BookH/Book.h
        Source/Source/Book/Book.cpp
        Header/BookH/Buy.h
        Source/Source/Book/Buy.cpp
        Header/UserH/Administration.h
        Source/Source/User/Administration.cpp
        Header/BookH/BookData.h
        Source/Source/Book/BookData.cpp
        Header/BookH/InsertBook.h
        Source/Source/Book/InsertBook.cpp
        Header/UserH/Transactions.h
        Source/Source/User/Transactions.cpp
        Header/ScreenH/Views.h
        Header/ScreenH/Screen.h
        Source/Source/Screen/Screen.cpp
        Header/ScreenH/Set.h
        Source/Source/Screen/Set.cpp
)
