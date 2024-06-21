#ifndef COUNTER_CLASS_H
#define COUNTER_CLASS_H

class Counter
{
private:
    int number;
public:
    Counter(/* args */);
    ~Counter();

    Counter operator++(); //prefix 
    Counter operator++(int);//postfix

    Counter operator--(); //prefix 
    Counter operator--(int);//postfix

    int get_number()const;
    
};






#endif