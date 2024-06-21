#include <iostream>

void find_Area(double height);
void find_Area(double height,double width);

int main(void)
{

    find_Area(5);
    find_Area(5,6);
    
    return 0;

}


void find_Area(double height)
{
    std::cout<<"The square Area = "<<height*height<<"\n";
}
void find_Area(double height,double width)
{
     std::cout<<"The Rectangle Area = "<<height*width<<"\n";
}