#include <iostream>
#include<cstring>
#include<string>
int main(void)
{
    char firstName[50];
    std::cout<<"enter the first name: ";
    std::cin.getline(firstName,50);

    int i =0 ;
    while (firstName[i]!='\0')
    {
        if(isalpha(firstName[i])  )
        {
            
            std::cout<<(char)toupper(firstName[i])<<" ";
        }
        i++;
    }
    
}