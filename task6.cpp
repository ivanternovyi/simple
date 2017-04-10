
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    double a, b, c, Des;
    cout<<"Введіть А: ";
    cin>>a;
    cout<<"Введіть B: ";
    cin>>b;
    cout<<"Введіть C: ";
    cin>>c;
    Des=pow(b, 2)-4*a*c;
    bool d;
    d=(Des==0);
    if (a==1)
        cout<<"Існує тільки 1 розв'язок!";
    else
        cout<<"Не існує єдиного розв'язку";
     
    
    return 0;
}

