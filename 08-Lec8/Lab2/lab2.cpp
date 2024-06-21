#include <iostream>
#include <memory>
#include<string>

class  Car
{
private:
    std::string brand;
    std::string model;
public:
     Car(std::string brand,std::string model):brand{brand},model{model} 
        {   
            std::cout<<"Hello from constructor\n";
        }
    ~ Car()
    {   
        std::cout<<"Hello from destructor\n";
    }

    void Display()
    {
        std::cout<<"Car Brand: "<<brand<<"\n";
        std::cout<<"Car Model: "<<model<<"\n";

    }
};


using namespace std;
int main()
{
    std::string str ("Sanfoundry.ff");
  str.back() ='2' ;
  std::cout << str << endl;

    // int a = 5;
    //     float b;
    //     cout << sizeof(++a + b);
    //     cout << a;
    // int cin;
    // cin >> cin;
    // cout << "cin: " << cin;
   
    // //std::unique_ptr<int []> arrUPtr= std::make_unique<int[]>(5);
    // std::shared_ptr <Car> car1 = std::make_shared<Car>("BMW","G7");
    // std::shared_ptr <Car> car2 ;
    // std::weak_ptr<Car> W_Ptr = car1 ;
    // // W_Ptr = car1;
    // std::shared_ptr <Car> car3 =W_Ptr.lock() ;

    // car2 = car1 ;
    // std::cout<<"------------\n";
    // car1.reset();
    // std::cout<<"Reference count = "<<car1.use_count()<<"\n";
    // std::cout<<"------------\n";
    // // car1->Display();
    // car2->Display();
    // // car1.reset();
    
    return 0;
}