#include <iostream>

class Toolbooth
{
private:
    int carsNum;
    double money;
public:
    Toolbooth();
    ~Toolbooth();

    void set_carsNum(int CarsNumber);
    void set_money(double Money);
    int  get_carsNum();
    double get_money();

    void payingCar();
    void nopayCar();
    void Display()const;
};


Toolbooth::Toolbooth():carsNum{0},money{0}{}

Toolbooth::~Toolbooth()
{
}

void Toolbooth::payingCar(void){money+=0.5;}
void Toolbooth::nopayCar(void){carsNum++;}
void Toolbooth::Display(void)const{std::cout<<"total Car numbers = "<<carsNum <<" ,total cash = "<<money<<"\n";};

void Toolbooth::set_carsNum(int CarsNumber)
{
    carsNum = CarsNumber;
}
void Toolbooth::set_money(double Money)
{
    money = Money;
}
int Toolbooth::get_carsNum()
{
    return carsNum;
}
double Toolbooth::get_money()
{
    return money;

}


int main()
{


    return 0;
}



