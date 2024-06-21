#include<iostream>

//using namespace std;

int main()
{
    int num1,num2;
    
    std::cout<<"enter 2 integer numbers :\n";
    std::cin>>num1>>num2;
    std::cout<<num1<< " > " <<num2 <<"  is : "<<std::boolalpha<<(num1> num2)<<"\n";
    std::cout<<num1<< " < " <<num2 <<"  is : "<<std::boolalpha<<(num1< num2)<<"\n";
    std::cout<<num1<< " >= " <<num2 <<" is : "<<std::boolalpha<<(num1>=num2)<<"\n";
    std::cout<<num1<< " <= " <<num2 <<" is : "<<std::boolalpha<<(num1<=num2)<<"\n";
    std::cout<<num1<< " == " <<num2 <<" is : "<<std::boolalpha<<(num1==num2)<<"\n";
    std::cout<<num1<< " != " <<num2 <<" is : "<<std::boolalpha<<(num1!=num2)<<"\n";
    std::cout<<"Hit any key to continue... \n";
}