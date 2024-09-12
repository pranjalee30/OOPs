#include <bits/stdc++.h> 
using namespace std;
 /*
  Polymorphism:- It is the ability of the obk=jects to take on different forms
                 or behave in different ways depending on the context in which they are used.
      
      1. Compile Time Polymorphism
         Ex:- Constructor Overloading
         Ex:- Function Overloading
         Ex:- Operator Overloading
      2. Run Time Polymorphism 

 */
class Print {
  public: 
     void Show(int x){
        cout<<x<<endl;
     }
     void Show(char ch){
        cout<<ch<<endl;
     }
};
int main()
{ 
    // Compile Time Polymorphism :  
      // Ex:- Function  Overloading.
    Print P1; 
    P1.Show(1);// Parameter type int
    P1.Show('a');// Parameter type char   

    
 return 0;
}