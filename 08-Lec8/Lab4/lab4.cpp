#include <iostream>
#include <memory>

class Dog;
class Person;
class Dog
{

public:
    std::string name;
    std::weak_ptr<Person> WPerson;
    Dog(std::string name)
        : name{name} {}

    void setPerson(std::shared_ptr<Person> SPerson)
    {
        WPerson = SPerson;
    }
    ~Dog() { std::cout << "Dog Destructor\n"; }
};
class Person
{
public:
    std::string name;
    std::shared_ptr<Dog> SDog;
    Person(std::string name)
        : name{name} {}

    void setDog(std::shared_ptr<Dog> SDog)
    {
        this->SDog = SDog;
    }

    void display()
    {
        if (SDog)
        {
            std::cout << "Person: " << this->name << " ,Dog: " << SDog->name<< "\n";
        }
    }
    ~Person() { std::cout << "Person Destructor\n"; }
};


int main()
{

    std::shared_ptr<Person> SPerson_Ptr = std::make_shared<Person>("Essam");
    std::shared_ptr<Dog> SDog_Ptr = std::make_shared<Dog>("REX");

    SPerson_Ptr->setDog(SDog_Ptr);
    SDog_Ptr->setPerson(SPerson_Ptr);

    if (std::shared_ptr<Person> SPerson_Ptr = SDog_Ptr->WPerson.lock())
    {

        SPerson_Ptr->display();
    }
    else
    {
        std::cout << "Dog has no owner\n";
    }
    return 0;
}