#include <iostream>
#include <vector>

void print_vect(const std::vector<std::string> &vect); 

int main()
{
    std::vector<std::string> v = {"Mo", "Ali"};
    

    print_vect(v);

   

    return 0;
}

void print_vect(const std::vector<std::string> &vect) 
{

/*
   for ( std::string st : vect)
    {
        st = "NO";
        std::cout << st << " "; 
    }
    
*/


     std::vector <std::string>::const_iterator it =vect.begin();
    
    for(;it!=vect.end();++it)
    {
      std::cout<<*it<<std::endl;
    }
    
   
}