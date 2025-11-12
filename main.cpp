#include "animal.h"
#include "mammal.h"
#include "bird.h"
#include "reptile.h"
#include "enclosure.h"
#include "visitor.h"


animal::animal(string n,int g,bool h){
    
    name=n;
    age=g;
    ishungry=h;

}
animal::animal(){
    
    name="";
    age=0;
    ishungry=0;
    
}
animal::~animal(){}

void animal::display(){
    
   cout<<"name:"<<name<<endl; 
    cout<<"age:"<<age<<endl; 
     
}
void animal::feed(){
    
    if(ishungry==0)
    cout<<"hungry"<<endl;
    
    else 
    cout<<"not hungry"<<endl;

}

mammal::mammal(string n,int g,bool h,string f):animal(n,g,h){
    furcolor=f;

}
mammal::mammal():animal(){
    
     furcolor="";
}
mammal::~mammal(){}

bird::bird(string n,int g,bool h,float w):animal(n,g,h){
    
    wingspan=w;
    
}

bird::bird():animal(){
    
wingspan=0.0;
    
}
bird::~bird(){}


reptile::reptile(string n,int g,bool h,bool v):animal(n,g,h){
    
    isvenomus=v;
}
reptile::reptile():animal(){
    
    isvenomus=0;
}

reptile::~reptile(){}

enclosure::enclosure(int c){
    
    n=nullptr;
    capacity=c;
    current=0;
}
enclosure::enclosure(){
    
    n=nullptr;
    capacity=0;
    current=0;

}
enclosure::~enclosure(){
    delete [] n;
}

void enclosure:: addanimal(animal* a){
    
    animal* b=new animal[current+1];
    for(int i=0;i<current;i++){
        b[i]=n[i];
    }
    b[current]=*a;
    current++;
    animal*t=n;
    n=b;
    delete t;
}
void enclosure::displayanimals(){
    
    for(int i=0;i<current;i++){
        n[i].display();
        
    }
    cout<<"current:"<<current<<endl;
    cout<<"capacity:"<<capacity<<endl;
    
}

visitor::visitor(string n,int b){
    
    visitorname=n;
    ticketsbought=b;
    
}
visitor::visitor(){
     visitorname="";
    ticketsbought=0;
    
}
visitor::~visitor(){}

void visitor::displayinfo(){
    
    cout<<"visitorname"<<visitorname<<endl;
    cout<<"ticketsbought"<<ticketsbought<<endl;
    
}












int main()
{
    
    enclosure c1(15);
    
    visitor v1("sarah ali",3);
    
     animal* a=new mammal();
     animal* b=new bird();
     animal* c=new reptile();
    c1.displayanimals();
    
    v1.displayinfo();
    return 0;
}
