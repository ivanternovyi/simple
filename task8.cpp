#include <iostream>
using namespace std;
int main(){
   int a1, a2, b1, b2;
   cout<<"Введіть поля (в межах [1,8])"<<endl;
   cin>>a1>>b1>>a2>>b2;
   bool a;
   a= (a1+b1)%2==(a2+b2)%2;
   if (8<a1<1||8<a2<1||8<b1<1||8<b2<1)
   {
       cout<<"Ви вийшли за межі!";
       return 0;
   }
   if (a==1)
       cout<<"Колір поля однаковий";
   else
       cout<<"Колір поля різний";

    return 0;
}
