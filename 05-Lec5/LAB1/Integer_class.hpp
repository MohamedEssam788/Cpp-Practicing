#ifndef INTEGER_CLASS_H
#define INTEGER_CLASS_H

class Integer
{
private:
    int *ptr;
public:
    Integer(/* args */);
    Integer(int number);
    Integer(Integer &obj);
    Integer(Integer &&obj);
    ~Integer();


    void Set_Value(const int value);
    int Get_Value()const;

    Integer &operator+(int num);
};




#endif