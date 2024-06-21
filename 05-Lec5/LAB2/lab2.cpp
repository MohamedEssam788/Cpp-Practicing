#include <iostream>
#include "counter_class.hpp"

int main()
{
    Counter C;
    ++C;
    std::cout<<"number = "<<C.get_number()<<"\n";

    C++;
    std::cout<<"number = "<<C.get_number();
}