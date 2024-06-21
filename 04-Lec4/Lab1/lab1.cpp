#include <iostream>
#include "Dog_Class.hpp"

int main()
{
    Dog dog1;
    // dog1.set_name("REX");
    // dog1.set_age(5);

    std::string str = dog1.get_name();
    int age = dog1.get_age();


    Dog dog2("TEX");
    std::string str2 = dog2.get_name();

    Dog dog3("MEX",22);
    std::string str3 = dog3.get_name();
    int age3 = dog3.get_age();
    return 0;
}

   
 