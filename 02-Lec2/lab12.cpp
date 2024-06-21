#include <iostream>
#include<cstring>
#include<string>
int main(void)
{
    char lastName[10] ;
    char firstName[50];
   // std::string firstName;
    std::cout<<"enter the first name: ";
    std::cin.getline(firstName,50,'k');
    //std::cin.getline(firstName,50);
    //std::getline(std::cin, firstName);

    std::cout<<"enter the second name: ";
    std::cin>>lastName;

    std::cout<<"============================== \n";
    std::cout<<"Hello, "<<firstName <<" your first name has "<<strlen(firstName)<<" Characters \n";
    std::cout<<"and, your last name "<<lastName <<" has "<<strlen(lastName)<<" Characters \n";

    std::cout<<"your full name is "<<strcat(firstName , lastName);
}