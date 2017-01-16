#include <iostream>
using namespace std;
int main(){
   int a1, a2, b1, b2;
   cout<<"Введіть поля "<<endl;
   cin>>a1>>b1>>a2>>b2;
   bool a;
   a= (a1+b1)%2==(a2+b2)%2;
   if (a==1)
       cout<<"Колір поля однаковий";
   else
       cout<<"Колір поля різний";

    return 0;
}
