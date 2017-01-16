#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    int y, x;
    y=0;
    cout<<"Введіть x = ";
    cin>>x;
    if (x<=0)
        y=-x;
    else if (x>0)
        y=pow(x, 2);
    cout<<"y = "<<y;
    
    return 0;
}

