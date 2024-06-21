#include <iostream>
#include<cmath>
class Shape
{
private:
    /* data */
public:


    Shape(/* args */){}
   virtual ~Shape(){std::cout<<"Hello Shape destructor\n";}


   virtual void calcArea()
   {
        std::cout<<"------------------------\n";
        std::cout<<"Hello Shape calcArea\n";
        std::cout<<"------------------------\n";

   }
};

class Circle : public Shape
{
private:
    double raduis;
public:


    Circle(double raduis):raduis{raduis}{}
   virtual ~Circle()
   {
     std::cout<<"------------------------\n";
     std::cout<<"Hello Circle destructor\n";
     std::cout<<"------------------------\n";
   }


   virtual void calcArea()
   {
        std::cout<<"------------------------\n";
        std::cout<<"Hello Circle calcArea\n";
        std::cout<<"Circle Area = "<< pow(this->raduis ,2)* M_PI <<"\n";  
        std::cout<<"------------------------\n";
   }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;
public:


    Rectangle(double length, double width):length{length},width{width}{}
   virtual ~Rectangle(){std::cout<<"Hello Rectangle destructor\n";}


   virtual void calcArea()
   {    std::cout<<"------------------------\n";
        std::cout<<"Hello Rectangle calcArea\n";
        std::cout<<"Rectangle Area = "<<this->length * this->width <<"\n";    
        std::cout<<"------------------------\n";
    }
};








int main()
{
    Shape *sh = new Rectangle{3,4};
    sh ->calcArea();

    Circle    c1{5};
    Rectangle R1{2,3};

    /*Shape pointer pointing  to Circle  object*/
    Shape   *ptr  =&c1 ;

    ptr->calcArea();

    /*Shape pointer pointing  to Rectangle  object*/
    ptr  =&R1 ;
    ptr ->calcArea();

    delete sh;
}