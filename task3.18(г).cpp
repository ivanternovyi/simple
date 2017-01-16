#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    double a1, b1, c1, x, y;
    cout<<"Ведіть коефіцієнти 1 р-ня "<<endl;
    cin>>a1>>b1>>c1;
    double a2, b2, c2;
    cout<<"Введіть коефіцієнти 2 р-ня "<<endl;
    cin>>a2>>b2>>c2;
    double detA, detx, dety;
    detA=a1*b2-b1*a2;
    if (detA==0)
    {
        cout<<"Визначник = 0, р-ня має або безліч розв'язків або жодного";
        return 0;
    }
    detx=c1*b2-b1*c2;
    dety=a1*c2-c1*a2;
    x=detx/detA;
    y=dety/detA;
    cout<<"Розв'зки "<<x<<", "<<y<<".";   
    
    
    return 0;
}

