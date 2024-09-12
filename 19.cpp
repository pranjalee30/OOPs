#include <bits/stdc++.h> 
using namespace std;
 /* 
  Static Keyword:-
    Static Variables:-
        Variable declared as static in a function are created & initialised once for the lifetime of the program.
        (in function)
        
        Static variables in a class are created & initialised once. They shared  by all the objects of the class.
        (in Class)

 */
void fun(){
    static int x=0; // initialisation statememt run once only 
    cout<<"x: "<<x<<endl;
    x++;
} 

int main()
{
  fun();// 0
  fun();// 1
  fun();// 2
 return 0;
}