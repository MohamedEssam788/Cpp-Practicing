#include<iostream>

//using namespace std;

int main()
{
    int ID;
    std::cout<<"enter your ID :";
    std::cin>>ID;


    switch (ID)
    {
    case 1234:
        std::cout<<"Wlcome Ahmed\n";
        break;
    case 5677:
        std::cout<<"Welcome Yousef\n";
        break; 
    case 1145:
        std::cout<<"Welcome Mina\n";
        break; 
    default:
        std::cout<<"Wrong ID    \n";
        break;
    }
}