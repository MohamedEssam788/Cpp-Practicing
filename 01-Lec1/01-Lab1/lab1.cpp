#include<iostream>

//using namespace std;

// int main()
// {
//     int num1 ,num2;
//     double num3;
//     std::cout <<"Enter your favourite number : ";
//     std::cin >>num1;
//     std::cout <<"Wow! that's my favourite number too";
    
//     //std::cin.clear();
//     //fflush(stdin);
//     //std::cin >>num3;
//     //std::cout <<"Enter an interger number : ";
//     //std::cin >>num2;

//     //std::cout<< "you entered number1 : "<<num1 <<"  ,and number2 : "<<num3<<"\n";

//    // std::cout <<"Enter a double number : ";
//    // std::cin >>num3;

//     return 0;
// }   


int main() {
    if (__cplusplus == 202101L) std::cout << "C++23";
    else if (__cplusplus == 202002L) std::cout << "C++20";
    else if (__cplusplus == 201703L) std::cout << "C++17";
    else if (__cplusplus == 201402L) std::cout << "C++14";
    else if (__cplusplus == 201103L) std::cout << "C++11";
    else if (__cplusplus == 199711L) std::cout << "C++98";
    else std::cout << "pre-standard C++." << __cplusplus;
    std::cout<<"\n";
}