#include <iostream>


int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if( (i%3) == 0 && (i%5) == 0 )
        {
            std::cout<<i<<"\n";
        }
    }
    
    return 0 ;
}