#include <iostream>
#include "Dog_Class.hpp"

 Dog::Dog()
        {
            name = "John";
            age = 3;
        }
    Dog:: Dog(std::string Name)
        {
            name = Name;
        }
    Dog::Dog(std::string Name ,int Age)
        {
            name = Name;
            age =Age;
        }
        

/* Delegation Constructor*/
    // Dog::Dog()
    //     :Dog{"None",0}   
    //     {
    //     }
    // Dog:: Dog(std::string Name)
    //     :Dog{Name,0}
    //     {
            
    //     }
    // Dog::Dog(std::string Name ,int Age)
    //     :name{Name},age{Age}
    //     {
            
    //     }

void Dog::set_name(std::string Name)
{
    name = Name;
}
void Dog::set_age(int Age)
{
    age = Age;
}
std::string Dog::get_name()
{
    std::cout<<"Name : "<<name<<"\n";
}
int Dog::get_age()
{
    std::cout<<"age : "<<age<<"\n";

}
