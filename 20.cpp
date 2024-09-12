#include <bits/stdc++.h> 
using namespace std;
 
 class ABC{
   public:
    ABC(){
        cout<<"constructor"<<endl;
    }
    ~ABC(){
        cout<<"destructor"<<endl;
    }
 };
int main()
{
    if(true){
        static ABC obj; //It works lifetime of the program when created with static keyword 
    }
    cout<<"end of main fnc"<<endl;
 return 0;
}