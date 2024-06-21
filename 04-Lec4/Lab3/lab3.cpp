#include <iostream>

class Person
{
private:
    std::string name;
    int age;
    std::string country;
public:
    Person(std::string Name ,int Age ,std::string Country);



    ~Person();

    void set_name(std::string Name);
    void set_age(int Age);
    void set_country(std::string Country);
    std::string get_name();
    int get_age();
    std::string get_country();

};

Person::Person(std::string Name="None" ,int Age=0 ,std::string Country="None")
    :name{Name},age{Age},country{Country}
    {
    }

Person::~Person()
{
}


    void        Person::set_name(std::string Name)      {name =Name;}
    void        Person:: set_age(int Age)               {age =Age;}
    void        Person::set_country(std::string Country){country =Country;}
    std::string Person::get_name()                      {return name;}
    int         Person:: get_age()                      {return age;}
    std::string Person::get_country()                   {return country;}

int main()
{
    Person person1;

    Person person2("3ssoma",24,"Egypt");   

    return 0;
}