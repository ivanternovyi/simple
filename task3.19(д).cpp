#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    double a;
    cout<<"Введіть число з 3-ма знаками після коми ";
    cin>>a;
    int h;
    h=a*1000;
    int c, d, e;
    c=h%10;
    d=(h%100-h%10)/10;
    e=(h%1000-h%100)/100;
    bool b;
    b=(c==0)||(d==0)||(e==0);
    if (b==1)
        cout<<"В дробовій частині є 0 ";
    else
        cout<<"В дробовій частині немає 0";
    
    return 0;
}

