#include <iostream>
using namespace std;

class enclosure{
   private:
   animal* n;
   int capacity;
   int current;
   
   public:
   enclosure(int c);
    enclosure();
    ~enclosure();
    void addanimal(animal* a);
    void displayanimals();
    
    
    
    
};
