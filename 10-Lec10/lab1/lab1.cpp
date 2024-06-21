#include <iostream>
#include<map>


std::string current_state(std::map<int,std::string> ma,int key)
{
    std::string state;
    auto it = ma.begin();
    
    if( ma.count(key) )  
    {
        std::advance(it,key-1);
        state = it->second;
    }
    else
    {
        state ="state not exist.... Invalid Choice...!!!!\n";
    }
    return state;
}

int main ()
{
    std::map<int ,std::string> m={
                                    {1,"play"},
                                    {2,"pause"},
                                    {3,"stop"}
                                 };


    bool flag =true;
    while (flag)
    {
        std::cout<<"welcome to audio player... :) \n";
        std::cout<<"-------------------------------\n";
        std::cout<<"1.play :\n";
        std::cout<<"2.pause :\n";
        std::cout<<"3.stop :\n";
        std::cout<<"4.exit :\n\n";

        std::cout<<"select the state :";

        int state;
        std::cin>>state;
        
        if(state == 4 )
        {
            flag = false;
            std::cout<<"Bye...!!\n";
        }

        else
        {
            std::cout<<"\n"<<current_state(m,state)<<"\n";
            std::cout<<"-------------------------------\n";

        }
        
       
    }
    
     
   
    
    return 0;
}