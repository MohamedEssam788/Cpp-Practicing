#ifndef DOG_CLASS_H
#define DOG_CLASS_H
#include<string>



class Dog
{   
    private:
        std::string name;
        int age ;

    public:
        /* Constructors */
        Dog();
        Dog(std::string Name);
        Dog(std::string Name ,int Age);
        //Setters
        void set_name(std::string Name);
        void set_age(int age);

        //getters
        std::string get_name();
        int get_age();
         
};



#endif