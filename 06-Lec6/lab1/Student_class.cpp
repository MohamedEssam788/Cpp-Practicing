#include <iostream>
#include "Student_class.hpp"
#include "Person_class.hpp"







Student:: Student(): Person() ,Course{"None"},fees{0}{}
 Student   ::Student(std::string name,int id,int age,char gender,std::string country,std::string Course,double fees)
 :Person{name,id,age,gender,country}{
        this->Course=Course;
        this->fees = fees;
    }
Student:: Student(const Student& obj):Person(obj)
    {
        Course = obj.Course;
        fees = obj.fees;
    }
Student:: Student( Student&& obj):Person(std::move(obj))
    {
        Course = obj.Course;
        fees = obj.fees;
    }
    Student& Student::operator=(const Student &obj)
    {
        std::cout<<"Hello Deep\n";
        Person::operator=(obj);
        Course = obj.Course;
        fees = obj.fees;
        return *this;
    }
    Student& Student::operator=( Student &&obj)
    {
        Person::operator=(std::move(obj));
        Course = obj.Course;
        fees = obj.fees;
        return *this;
    }
Student::    ~Student(){}

    void Student::Display()
    {
        Person::Display();
        std::cout<<"Course: "<<Course<<" , Fees: "<<fees<<"\n";
    }