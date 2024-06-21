#include<iostream>

//using namespace std;

int main()
{
    int arr[5]={0};
    int sum =0;
    double avg = 0 ;
    std::cout<<"enter 5 integer numbers :\n";
    for (int i = 0; i < 5; i++)
    {
        std::cin>>arr[i];
        sum+= arr[i]; 
    }

     avg =static_cast<float> (sum )/ 5.0;

     std::cout<<"average =  :"<<avg <<"\n";

    
    return 0;
}