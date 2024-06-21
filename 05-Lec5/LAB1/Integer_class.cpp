#include <iostream>
#include "Integer_class.hpp"



Integer::Integer():ptr{nullptr}
{
    ptr = new int;
    *ptr = 0;
}

Integer::Integer(int number):ptr{nullptr}
{
    ptr = new int;
    *ptr = number;
}

Integer::Integer(Integer &obj):ptr{nullptr}
{
    ptr = new int;
    *ptr = obj.Get_Value();
}

Integer::Integer(Integer &&obj):ptr{nullptr}
{
    ptr = obj.ptr;
    obj.ptr = nullptr;
}

Integer::~Integer()
{
    delete ptr;
}



void Integer::Set_Value(const int value)
{
    *ptr = value;
}


int Integer::Get_Value()const
    {
        return *ptr;
    }


Integer& Integer::operator+(int num)
{
    Integer b;
    b.ptr = this ->ptr + num;
    return   b;
}