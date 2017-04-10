#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    double R, a, perumetr, square;
    cout<<"Введіть радіус описаного кола навколо 17-кутника: ";
    cin>>R;
    a=2*R*sin(3.14/17);
    perumetr=17*a;
    cout<<"Периметр = "<<perumetr<<endl;
    square=(17/2)*pow(R, 2)*sin(2*3.14/17);
    cout<<"Площа = "<<square;
   
    return 0;
}

