#include <iostream>
#include <memory>

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle( double width=0,double height=0):width{width},height{height}{}
    ~Rectangle(){std::cout<<"Hello from Destructor\n";}

    double area()
    {
        return this->width* this->height;
    }
};




int main()
{
    //std::unique_ptr <Rectangle> ptr1 = std::make_unique<Rectangle>(2,3);
    //std::unique_ptr <Rectangle> ptr1 = std::make_unique<Rectangle>(new Rectangle(2,3));
    std:: unique_ptr <Rectangle> ptr1{new Rectangle{2,3}};
    std:: unique_ptr <Rectangle> ptr2;

    std::cout<<"area from ptr1  = "<<ptr1->area()<<"\n";

    ptr2 = std::move(ptr1);
    std::cout<<"area from ptr2= "<<ptr2->area()<<"\n";
    

    if(ptr1 != nullptr)
    {
        std::cout<<"ptr =" <<"\n";
    }
    else 
    {
        std::cout<<"nullptr\n";
    }

    return 0;
}