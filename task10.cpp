
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int a;
    cout<<"Введіть 4-значне число а: ";
    cin>>a;
    int b, c, d, e;
    b=a/1000;
    c=(a/100)%10;
    d=((a/10)%100)%10;
    e=a%10;
    bool g;
    g=(b+c+d+e==25);
    if (g == 1)
    {
        cout<<"Сума цифр рівна 25"; 
    }
    else
        cout<<"Сума цифр не рівна 25"; 

    
    
    return 0;
}

