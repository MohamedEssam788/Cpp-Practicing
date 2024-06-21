#include <iostream>
#include "Person_class.hpp"


    Person:: Person(/* args */):name{"None"},id{0},age{0},gender{'n'},country{"None"}{}
    Person:: Person(std::string name,int id,int age ,char gender,std::string country)
        :name{name},id{id},age{age},gender{gender},country{country}{}
    Person:: Person(const Person& obj){
        name = obj.name;
        gender = obj.gender;
        country = obj.country;
        id = obj.id;
        age = obj.age;
    }
    Person:: Person( Person&& obj){
        std::cout<<"Hello \n";
        name = obj.name;
        gender = obj.gender;
        country = obj.country;
        id = obj.id;
        age = obj.age;
    }
     Person & Person::operator=(const Person &obj)
    {
        name = obj.name;
        gender = obj.gender;
        country = obj.country;
        id = obj.id;
        age = obj.age;
        return *this; 
    }

       Person & Person::operator=(Person &&obj)
    {
        name = obj.name;
        gender = obj.gender;
        country = obj.country;
        id = obj.id;
        age = obj.age;
        return *this; 
    }
    Person:: ~Person(){}




    void Person:: Display()
    {
        std::cout<<"Name : "<<name<<" ,ID : "<<id<<" ,Age:  "<<age<<" ,Gender : "<<gender<<" ,Country:  "<<country<<"\n";
    }