#include <iostream>


int main(void)
{
    int num[10]{0};
    int Largest=0,smallest ;
    for (int i = 0; i < 10; i++)
    {
        std::cout<<"Enter Number  "<<i+1 <<" : ";
        std::cin>>num[i];
        if(num[i]> Largest)
        {
            Largest = num[i];
        }
        if(num[i]<smallest)
        {
            smallest=num[i];
        }
    }


    
    std::cout<<"the Largest = "<<Largest;
    std::cout<<"the smallest = "<<smallest;   
}