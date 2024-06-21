#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
     str = new char[1];
     *str = '\0'; 
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];//just for the size 
            std::strcpy(str, s);//copying data
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment - deep copy
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    
    //check for self assignment
    if (this == &rhs)
        return *this;

    delete [] this->str;
    //delete [] str;

    str = new char[std::strlen(rhs.str) + 1];
    
    //copying rhs string to current object string str
    std::strcpy(str, rhs.str);

    return *this;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }




