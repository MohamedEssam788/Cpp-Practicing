#include<iostream>

//using namespace std;

int main()
{
    int rooms=0,days=0;
    int cost =0,tax=0,total =0;
     std::cout <<"Enter the number of rooms you want to reserve : ";
     std::cin>>rooms;
     std::cout <<"Enter the days you want to stay : ";
     std::cin>>days;

    cost = rooms*days*300;

    tax = cost* 0.1;

    total = cost + tax;
    std::cout <<"the cost : "<<cost<<"\n";
    std::cout <<"the tex : "<<tax<<"\n";

    std::cout <<"the total : "<<total<<"\n";
    
    return 0;
}