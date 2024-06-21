#include <iostream>
#include <list>
#include <algorithm>
int main()
{
    std::list<int> li{1,2,3,4,2,2};

    li.remove(2);
    auto it = li.begin();
    for(it = li.begin() ; it!= li.end(); ++it )
    {
        std::cout<<*it <<" ";
    }
    std::remove
    return 0;
}