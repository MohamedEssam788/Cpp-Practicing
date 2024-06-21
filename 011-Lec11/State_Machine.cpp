#include <iostream>
#include <algorithm>
#include <vector>
#include <map>


enum State
{
    Play,
    Pause,
    Stop
};
enum Trigger
{
    PressPlay,
    PressPause,
    PressStop
};
void CurrentState(State obj)
{
    switch(obj)
    {
        case(State::Play):
        {
            std::cout<<"------------Current State => Play------------"<<std::endl;
            break;
        }
        case(State::Pause):
        {
            std::cout<<"------------Current State => Pause------------"<<std::endl;
            break;
        }
        case(State::Stop):
        {
            std::cout<<"------------Current State => Stop------------"<<std::endl;
            break;
        }
    }
}
int main()
{
    bool flag = false;
    int input;
    State Current_State = State::Stop;
    std::map<State,std::vector<std::pair<Trigger,State>>> m;
    m[State::Play] = {
        {Trigger::PressPause,State::Pause},
        {Trigger::PressStop,State::Stop}
    };
    m[State::Pause] = {
        {Trigger::PressPlay,State::Play},
        {Trigger::PressStop,State::Stop}
    };
    m[State::Stop] = {
        {Trigger::PressPlay,State::Play}
    };
    while(true)
    {
        flag = false;
        CurrentState(Current_State);

        std::cout<<"Enter 0 to play\n"
                "Enter 1 to pause\n"
                "Enter 2 to stop\n"<<std::endl;
        std::cin>>input;

        if((input>=0)&&(input<=2))
        {
            Trigger Current_Trigger = (Trigger)input;
            auto v = m[Current_State];
            for(auto p : v)
            {
                if(p.first == Current_Trigger)
                {
                    flag = true;
                    Current_State = p.second;
                    break;
                }
            }
            if(flag == false)
            {
                std::cout<<"Can't transfer the current state...."<<std::endl;
            }
        }
        else
        {
            std::cout<<"Invalid input please try again....."<<std::endl;
        }
    }
    return 0;
}