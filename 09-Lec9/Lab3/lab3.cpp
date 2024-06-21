#include <iostream>
template <typename T>
class Counter
{
private:
    static int count ;
public:
    Counter(/* args */);
    ~Counter();

    void getCounter()
    {
        std::cout<<"Counter: "<<this->count<<"\n";
    }
};

template <typename T>
 int Counter<T>::count=0 ;

template <typename T>
Counter<T>::Counter(/* args */)
{
    count++;
}

template <typename T>
Counter<T>::~Counter()
{
}


int main()
{
    Counter<int> obj1,obj2,obj3,obj4;


    obj4.getCounter();
    Counter<double> obj5;
    Counter<double> obj6;
    obj6.getCounter();

}