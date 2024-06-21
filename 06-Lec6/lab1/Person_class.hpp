#ifndef PERSON_CLASS_H
#define PERSON_CLASS_H
#include <iostream>
class Person
{
private:
    std::string name;
    int id;
    int age ;
    char gender;
    std::string country;
public:
   Person(/* args */);
   Person(std::string name,int id,int age ,char gender,std::string country);
    Person(const Person& obj);
   Person( Person&& obj);
   Person & operator=(const Person &obj);
   Person & operator=(Person &&obj);
   ~Person();
    void Display();
};


#endif