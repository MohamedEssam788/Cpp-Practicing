#include <iostream>
#include <cmath>

void CircleArea(double raduis);
void CylinedrVolume(double raduis,double height);
constexpr double PI =3.14;
int main(void)
{
    double raduis,height;
    std::cout<<"Enter the circle raduis: ";
    std::cin>>raduis;

    CircleArea(raduis);

    std::cout<<"\nCylinder volume calculation\n";
    std::cout<<"Enter the raduis: ";
    std::cin>>raduis;
    std::cout<<"Enter the height: ";
    std::cin>>height;

    CylinedrVolume(raduis,height);

    
    return 0;

}
void CircleArea(double raduis)
{
    std::cout<<"The circle area = "<<M_PI*pow(raduis,2)<<"\n";
}
void CylinedrVolume(double raduis,double height)
{
    std::cout<<"The cylinder with raduis = "<<raduis<< " and height = "<<height <<" has a volume = "<<M_PI*pow(raduis,2)*height<<"\n";
}