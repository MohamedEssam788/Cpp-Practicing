#include <iostream>
#include <vector>

int main(void)
{
    std::vector<std::string> s{"ali","Mo"};
    auto i = s.begin();

    for(;i != s.end();i++)
    {
        std::cout<<*i <<"\n";
    }
    
    return 0;

}