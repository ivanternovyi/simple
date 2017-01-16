#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int a1, a2, b1, b2;
   cout<<"Введіть поля (спочатку де знаходиться король) "<<endl;
   cin>>a1>>b1>>a2>>b2;
   bool a;
   a= abs(a1-a2)>1||abs(b1-b2)>1;
   if (a==1)
       cout<<"Король не зможе побити в даному квадраті";
   else
       cout<<"Король зможе побити в даному квадраті";
       
   
    return 0;
}
