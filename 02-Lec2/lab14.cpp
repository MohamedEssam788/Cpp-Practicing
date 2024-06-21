#include<iostream>
#include<string>


int main(void)
{
    std::string str;

    std::cout<<"Enter a number : ";
    std::cin>>str;

    int i=0;

    for(int i =str.size()-3; i>0 ; i-=3)
    {
        str.insert(i,",");
    }
    
    std::cout<<str;

    return 0;
}