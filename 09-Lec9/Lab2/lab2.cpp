#include <iostream>

template <typename T,int SIZE>
class Stack;

template <typename T,int SIZE>
std::ostream &operator<<(std::ostream& os,const Stack<T,SIZE> &obj);

template <typename T,int SIZE>
class Stack
{       
private:
    int tos ;
   T arr[SIZE];
  
public:
    Stack(/* args */);
    ~Stack();

    Stack<T,SIZE>& push(T value);
    T pop();
    bool isEmpty();
  friend  std::ostream &operator<<(std::ostream& os,const Stack<T,SIZE> &obj)
    {
        for (int i = 0; i < obj.tos; i++)
        {
           os<<obj.arr[i]<<" ";
        }
        os<<"\n";
        return  os;
        
    }
    void Display()
    {
        for (int i = 0; i < SIZE-1; i++)
        {
            std::cout<<arr[i]<<" ";
            
        }
        std::cout<<"\n";
        
    }
};      


template <typename T,int SIZE>
Stack<T,SIZE>::Stack(/* args */)
{       
    tos =-1;
}
template <typename T,int SIZE>
Stack<T,SIZE>::~Stack()
{      
}

template <typename T,int SIZE>
    Stack<T,SIZE>& Stack<T,SIZE>::push(T value)
    {
        if( this ->tos >= SIZE-1 )
        {
        std::cout<<"Error, Stack is full.....!!!\n";
        }
        else
        {
            this->arr[++tos] = value;
        }
        return *this;
    }
template <typename T,int SIZE>
    T Stack<T,SIZE>::pop()
    {
        if(isEmpty() )
        {
            std::cout<<"Error, Stack is empty....!!\n";
            return T{};
        }
        else
        {
            return arr[tos--];
        }
    }



template <typename T,int SIZE>
 bool Stack<T,SIZE>::isEmpty()
 {
    return (tos == -1) ? false: true ;
 }


int main ()
{   
    Stack<int ,5>st;
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    st.Display();
    return 0;
}