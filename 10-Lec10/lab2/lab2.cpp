#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
template <typename T>
void display(const std::array <T ,5> &arr)
{
    std::cout<<" [ ";
    for (const auto &i : arr)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"]\n";
    
}

void Max_Min()
{
    std::array<int ,5> arr1{1,2,3,4,5};
    auto it=  std::max_element(arr1.begin() ,
                              arr1.end() );
    
    auto it1=  std::min_element(arr1.begin() ,
                              arr1.end() );
    
    std::cout<<"Max = "<<*it<<" , Min = "<<*it1<<"\n";
}

void Adjacent()
{
    std::array<int ,5> arr1{1,2,3,4,5};
    auto it2= std::adjacent_find(arr1.begin() ,
                                arr1.end() );
    
    if(it2 != arr1.end())
    {
        std::cout<<"adj = "<<*it2<<"\n";
    }
}
void func(int &x)
{   
    x*=2;
}

void For_Each()
{
    std::array<int ,5> arr1{1,2,3,4,5};
    std::for_each(arr1.begin(),arr1.end()
             ,func   );
    display(arr1);
}

int main()
{
    std::vector<int> v;
    std::array<int,5 > arr1{1,2,3,4,5};
    std::array<int,5>   arr2{5,4,3,2,1};

    std::array<int ,4>::iterator it;
    //std::array<double ,5> arr2{2.4,3.5,2.7,9.1,3.2};

    display(arr1);
    display(arr2);

    std::cout<<"----------------\n";
    int *ptr = arr1.data();
    std::cout<<"Element arr1 value = "<<*ptr<<"\n";
    std::cout<<"Element arr1 address = "<<ptr<<"\n";
    std::cout<<"----------------\n";
    
    std::cout<<"Element arr1 value = "<<*(ptr+2)<<"\n";
    std::cout<<"Element arr1 address = "<<(ptr+2)<<"\n";
    std::cout<<"----------------\n";

    arr1.swap(arr2);
    display(arr1);
    display(arr2);

    std::cout<<"----------------\n";
    Max_Min();

    std::cout<<"----------------\n";
    For_Each();

    return 0 ;
}