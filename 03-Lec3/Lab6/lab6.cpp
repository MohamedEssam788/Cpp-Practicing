#include <iostream>


int main(void)
{   
    int elements ;
    int sum=0;
    std::cout <<"Enter the number of elements: ";
    std::cin>>elements;

    int *ptr = new int[elements];

    for (int i = 0; i < elements; i++)
    {
        std::cout<<"Enter element "<<i+1<<" : ";
        std::cin>>ptr[i];
        sum += ptr[i];
    }

    std::cout<<"Sum of the entered "<<elements<<" = "<<sum<<"\n";
    delete[] ptr;
    
      for (int i = 0; i < elements; i++)
    {
       std::cout<< ptr[i]<<" " ;
    }

    std::cout<<"Hit any key to continue... \n";

    return 0;
}