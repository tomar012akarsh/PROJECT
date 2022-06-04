#include <iostream>  
#include<string.h>
using namespace std;  
  class Parent
 {  
   public:  
   int a;
   string b;  
   int roll;
 };  
   class Child: public Parent {  
   public:  
   void In()
 {
   cout<<"Enter roll Number:";
   cin>>a;
   cout<<"Enter Name:";
   cin>>b;
  }
   void Out()
   {
     cout<<a<<endl;    
     cout<<b<<endl;    
    }
   };       
   int main(void)
   {  
     Child c1,c2,c3;  
     c1.In();
     c2.In();
     c3.In();
     c1.Out();
     c2.Out();
     c3.Out();
     
   }