#include<iostream>


class Animal
{
private:
    /* data */
public:
    Animal(/* args */){}
    virtual ~Animal(){}

    virtual void makeSound()=0;
};

class Dog:public Animal
{
private:
    /* data */
public:
    Dog(/* args */){}
    virtual ~Dog(){}
    
    void makeSound() override
    {
        std::cout<<"Woof Woof...\n";
    }
};

class Cat:public Animal
{
private:
    /* data */
public:
    Cat(/* args */){}
    virtual ~Cat(){}
    
    void makeSound() override
    {
        std::cout<<"Meow Meow...\n";
    }
};

class Bird:public Animal
{
private:
    /* data */
public:
    Bird(/* args */){}
    virtual ~Bird(){}
    
    void makeSound() override
    {
        std::cout<<"Tweet Tweet...\n";
    }
};

class Factory
{
public:
    static Animal* animalSelect(std::string animal)
    {
        if( (animal == "Cat") ||(animal == "cat") )
        {
            return new Cat();
        }
        else if( (animal == "Dog") ||(animal == "dog") )
        {
            return new Dog();
        }
        else if( (animal == "Bird") ||(animal == "bird") )
        {
            return new Bird();
        }
        else 
        {
            return nullptr;
        }
    }
};


int main()
{
    Animal *animal = Factory::animalSelect("cat");
    if(animal != nullptr)
    animal ->makeSound();

    delete animal;

    return 0;
}