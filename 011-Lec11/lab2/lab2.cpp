#include <iostream>
#include <map>
#include <algorithm>


int main()
{
    int inp;
    std::cin>>inp;
    int quiries; 
    std::string inp_name;
    int mark;   
    std::map<std::string,int> m;
    auto it = m.begin();
    for (int i=0; i<inp; i++) 
    {   
        std::cin>>quiries;
        switch (quiries) {
            case 1:
                std::cin>>inp_name;
                std::cin>>mark;
                if(m.count(inp_name))
                {
                    for(it = m.begin();it!=m.end();it++)
                    {
                        if(it->first == inp_name)
                        {
                            it->second += mark;
                        }
                    }
                }
                else
                {   
                    m.insert(std::make_pair(inp_name,mark));
                }
            break;
            
            case 2:
                std::cin>>inp_name;
                for(it = m.begin();it!=m.end();it++)
                    {
                        if(it->first == inp_name)
                        {
                            it->second =0;
                        }
                    }
            break;
            
            case 3:
                std::cin>>inp_name;
                for(it = m.begin();it!=m.end();it++)
                    {
                        if(it->first == inp_name)
                        {
                            std::cout<<it->second<<"\n";
                        }
                    }
            break;
        }
    }   

        return 0;
}