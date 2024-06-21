#include <iostream>

template   <typename T,int size>
T multiplies (T x)
{
    T sum =1 ;
     for (int i = 1; i < size; i++)
     {
        sum+= x*i;
     }
         
    return (sum);
}



int main()
{
   int sum = multiplies<int,3>(2);
    std::cout<<"The sum = "<<sum<<"\n";

    return 0;
}