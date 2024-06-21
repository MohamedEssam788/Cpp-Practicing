#include <iostream>


int main(void)
{
    int height=0 ,width =0;
    char cont;

    do{
        std::cout<<"Enter the height: ";
        std::cin>>height;
        std::cout<<"Enter the width: ";
        std::cin>>width;
        std::cout<<"The area = "<<height*width<<"\n";
        std::cout<<"Do you want to continue(y/n): ";
        std::cin>>cont;
    }while (cont == 'y');
   
    std::cout<<"Thanks";

}