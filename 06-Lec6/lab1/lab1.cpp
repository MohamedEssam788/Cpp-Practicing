#include <iostream>
#include "Student_class.hpp"
#include "Person_class.hpp"

int main()
{
    Student obj1("3ssoma",1,24,'M',"Egypt","Cpp",2000);

    obj1.Display();

    //Student obj2(std::move(obj1));
    Student obj2;
    obj2= obj1;
     obj2.Display();
    return 0;
}