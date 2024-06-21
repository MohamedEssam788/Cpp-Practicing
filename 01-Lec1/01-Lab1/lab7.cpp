#include<iostream>

//using namespace std;

int main()
{
    int age;
    std::cout<<"enter your age :";
    std::cin>>age;

    if(age < 16 )
    {
        std::cout<<"NO you can't drive \n";
    }
    else
    {
        std::cout<<"yes you can  drive \n";
    }

}