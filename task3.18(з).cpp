#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    double a, b, c;
    cout<<"Введіть довжини 2 сторін трикутника "<<endl;
    cin>>a>>b;
    int kyt;
    cout<<"Введіть кут між ними ";
    cin>>kyt;
    c=sqrt(pow(a, 2)+pow(b, 2)-2*a*b* cos(kyt * 3.14159265 / 180.0));
    cout<<"Третя сторона рівна "<<c;  
    
    return 0;
}

