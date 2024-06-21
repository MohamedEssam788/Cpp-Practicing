#include <iostream>
#include<vector>

int main(void)
{
    int size;
    std::cout<<"Enter the size:  ";
    std::cin>>size;
    std::vector <int> num;

    for(int i =0; i<size ;i++)
    {
        int temp;
        std::cout<<"Enter emelemt "<<i+1<<" : ";
        std::cin>>temp ;
        num.push_back(temp);
    }

    /*for(auto& v :num)
    {
        std::cin>>v;
    }*/

     for(int i= num.size()-1 ;i>= 0 ;i--)
    {
        std::cout<<num[i]<<"\n";
    }
  }