#ifndef STUDENT_CLASS_H
#define STUDENT_CLASS_H

#include<iostream>
#include "Person_class.hpp"


class Student : public Person
{
private:
    std::string Course;
    double fees;
public:
    Student();
    Student(std::string name,int id,int age,char gender,std::string country,std::string Course,double fees);
    Student(const Student& obj);
    Student( Student&& obj);
    Student& operator=(const Student &obj);
    Student& operator=( Student &&obj);
    ~Student();
    void Display();

};


#endif