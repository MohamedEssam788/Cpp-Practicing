#include <iostream>


int main(void)
{
    int num[10]{0};
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        std::cout<<"Enter Number  "<<i+1 <<" : ";
        std::cin>>num[i];
        sum += num[i];
    }
    
    std::cout<<"the sum = "<<sum;
}