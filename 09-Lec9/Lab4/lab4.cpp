#include <iostream>


template <typename T,int SIZE>
class FixedArray
{
private:
    T *arr;
public:
    FixedArray();
    ~FixedArray();

   T &operator[](const int index)
    {
        if(index >= SIZE)
        {
            std::cout<<"Error , Out of Boundry\n";
            exit(0);
        }
        return arr[index];
    }
};
template <typename T, int SIZE>
FixedArray<T, SIZE>::FixedArray()
{
    arr = new T;
    for (int  i = 0; i < SIZE; i++)
    {
        arr[i]=0;
    }
    
}


template <typename T,int SIZE>
FixedArray<T,SIZE>::~FixedArray()
{
}


int main()
{
    FixedArray<int ,5 > obj;

    obj[1]=2;

    std::cout<<obj[1]<<"\n";
    std::cout<<obj[6]<<"\n";
    return 0;
}