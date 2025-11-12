#include <iostream>
using namespace std;

class visitor{
   private:
   string visitorname;
   int ticketsbought;
   
   public:
   visitor(string n,int b);
   visitor();
    ~visitor();
    void displayinfo();
    
   
  
    
};
