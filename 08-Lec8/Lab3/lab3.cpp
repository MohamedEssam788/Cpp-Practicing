#include <iostream>
#include <memory>

class Son;
class Daughter;
class Mother
{
public:
    std::weak_ptr<Son> wSon;
    std::weak_ptr<Daughter> wDaughter;

    void setSon(std::shared_ptr<Son> S_Ptr)
    {
        wSon = S_Ptr;
    }
    void setDaughter(std::shared_ptr<Daughter> D_Ptr)
    {
        wDaughter = D_Ptr;
    }

    ~Mother() { std::cout << "Mother Destructor\n"; }
};
class Daughter
{
private:
    std::string name;

public:
    std::shared_ptr<Mother> S_Mother;
    Daughter(std::shared_ptr<Mother> S_Mother) : S_Mother{S_Mother} {}
    ~Daughter() { std::cout << "Daughter Destructor\n"; }
};

class Son
{
private:
    std::string name;

public:
    std::shared_ptr<Mother> S_Mother;
    Son(std::shared_ptr<Mother> S_Mother) : S_Mother{S_Mother} {}
    ~Son() { std::cout << "Son Destructor\n"; }
};

int main()
{
    std::shared_ptr<Mother> M_Ptr = std::make_shared<Mother>();
    std::shared_ptr<Son>    S_Ptr = std::make_shared<Son>(M_Ptr);
    std::shared_ptr<Daughter>D_Ptr = std::make_shared<Daughter>(M_Ptr);
    
    M_Ptr->setSon(S_Ptr);
    M_Ptr->setDaughter(D_Ptr);
    
    return 0;
}