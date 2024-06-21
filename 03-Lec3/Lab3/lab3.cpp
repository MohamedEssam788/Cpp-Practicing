#include <iostream>

void swap(int &x ,int &y);

int main(void)
{
    int x =3,y=5;
    swap(x,y);
    std::cout<<"x = "<<x<<", y=  "<<y;
    
    return 0;

}


void swap(int &x ,int &y)
{
    int temp = x;
    x = y;
    y = temp;

}