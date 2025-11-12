#include <iostream>
using namespace std;

class animal{
    
    private:
    string name;
    int age;
    bool ishungry;
    
    public:
    animal(string n,int g,bool h);
    animal();
    ~animal();
    void display();
    void feed();
    
    
    
    
};
