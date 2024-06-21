#include <iostream>


int main(void)
{

    int num{0};
    
    std::cout<<"Enter a number : ";
    std::cin>>num;
     for(int i=1; i<=num; i++)
   {
     std::cout<<num<<" X "<< i <<" = "<<num*i<<"\n";
   }

}