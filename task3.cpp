#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int year;
    bool a;
    cout<<"Введіть рік "<<endl;
    cin>>year;
    a=(((year%4==0)&&(year%100!=0))||(year%400==0));
    if (a==1)
        cout<<"Рік високосний!";
    else
        cout<<"Рік не високосний!";
    
    return 0;
}

