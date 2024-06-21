#include<iostream>

//using namespace std;

int main()
{
    const double EUR = 1.19;
    int EUR_in =0;

    std::cout <<"Welcome to EUR to USD Converter \n";
    std::cout <<"Enter the value of EUR : ";
    std::cin>>EUR_in;
    std::cout<<EUR_in<<" euros in equivelant to "<<EUR_in*EUR<<" dollars\n";
    std::cout <<"Hit any key to continue....\n ";
}