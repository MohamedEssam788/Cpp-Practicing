#include <iostream>


class Vehicle
{
private:
    std::string brand;

public:
    Vehicle(/* args */):brand{"None"}{}
    
    Vehicle(std::string brand):brand{brand}{}
    ~Vehicle(){}

    void Display()
    {
        std::cout<<"Brand : "<<brand <<"\n";
    }

};

class Car: public Vehicle
{
private:
    int doors;
public:
    Car():Vehicle(),doors{0}{}
    Car(int doors,std::string brand):Vehicle{brand},doors{doors}{}
    ~Car(){}
    void Display()
    {   
        Vehicle::Display();
        std::cout<<"door number : "<<doors <<"\n";
    }
};

class SportCar: public Car
{
private:
    bool isConverted;
public:
    SportCar(/* args */):Car(),isConverted{true}{}
    SportCar(bool isConverted,int doors,std::string brand):Car{doors,brand},isConverted{isConverted}{}
    ~SportCar(){}
    void Display()
    {
        Car::Display();
        std::cout<<"isConverted : "<<isConverted;
    }
};







int main()
{

    SportCar car{true ,4,"BMW"};
    car.Display();
    return 0 ;
}