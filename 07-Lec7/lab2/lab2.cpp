#include <iostream>

class Employee
{
protected:
    /* data */
    std::string name;
    int age ;
public:


    Employee(std::string name,int age):name{name},age{age}{}
   virtual ~Employee(){std::cout<<"Hello Employee destructor\n";}


   virtual void printPostion()
   {
        std::cout<<"------------------------\n";
        std::cout<<"name : "<<name<<" , age: "<<age<<"\n";
        std::cout<<"------------------------\n";
   }
};

class Engineer : public Employee
{

public:


    Engineer(std::string name,int age):Employee{name,age}{}
   virtual ~Engineer()
   {
     std::cout<<"------------------------\n";
     std::cout<<"Hello Engineer destructor\n";
     std::cout<<"------------------------\n";
   }


     void printPostion() override
   {
     Employee::printPostion();
     std::cout<<"Position: Engineer\n";       
       
   }
};


class Manager : public Employee
{

public:


    Manager(std::string name,int age):Employee{name,age}{}
   virtual ~Manager()
   {
     std::cout<<"------------------------\n";
     std::cout<<"Hello Manager destructor\n";
     std::cout<<"------------------------\n";
   }


     void printPostion() override
   {
     Employee::printPostion();
     std::cout<<"Position: Manager\n";       
       
   }
};


class Salesman : public Employee
{

public:


    Salesman(std::string name,int age):Employee{name,age}{}
   virtual ~Salesman()
   {
     std::cout<<"------------------------\n";
     std::cout<<"Hello Salesman destructor\n";
     std::cout<<"------------------------\n";
   }


     void printPostion() override
   {
     Employee::printPostion();
     std::cout<<"Position: Salesman\n";       
       
   }
};






int main()
{
    

    Engineer    Eng{"3ssoma",24};
    Salesman    Sal{"Mo",23};
    Manager     Man{"Boss",52};
    Employee *ptr =&Eng;
    ptr ->printPostion();


    ptr =&Sal;
    ptr ->printPostion();


    ptr =&Man;
    ptr ->printPostion();

    return 0;
}