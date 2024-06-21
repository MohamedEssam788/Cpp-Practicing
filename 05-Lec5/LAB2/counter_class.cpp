#include "counter_class.hpp"
#include <iostream>


Counter::Counter(/* args */):number{0}
{

}

Counter::~Counter()
{
}


Counter Counter::operator++()
{
     std::cout<<"Prefix\n";
    ++number;
    return *this;
}

Counter Counter::operator++(int)
{
     std::cout<<"Postfix\n";
    number++;
    return *this;
}


Counter Counter::operator--()
{
    std::cout<<"Prefix\n";
    --number;
    return *this;
}

Counter Counter::operator--(int)
{
    std::cout<<"Postfix\n";
    number--;
    return *this;
}

int Counter ::get_number()const
{
    return this->number;
}
    