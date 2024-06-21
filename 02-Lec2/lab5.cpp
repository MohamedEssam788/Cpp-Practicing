#include <iostream>


int main(void)
{
    int num=0;

    do{
        std::cout<<"Enter Number  less than 100: ";
        std::cin>>num;

    }while (num>100);
   
    std::cout<<"Thanks";

}