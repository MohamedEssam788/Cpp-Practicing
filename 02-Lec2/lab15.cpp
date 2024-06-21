#include<iostream>
#include<string>
#include<cstring>

int main(void)
{
    std::string str;

    std::cout<<"Enter a string : ";
    std::cin>>str;
/*
    for(int i=str.size()-1 ;i>=0 ;i--)
    {
        if((!isalpha(str[i])))
        {
            str.erase(i,1);
        }
        
    }

*/
   for(int i=0 ;i<str.size()-1 ;i++)
    {
        if((!isalpha(str[i])))
        {
            str.erase(i,1);
            i--;
        }
        
    }
    std::cout<<str;
}