#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
 int x, y, z;
    cout<<"Enter 3 numbers"<<endl;
    cin>>x>>y>>z;
    bool a;
    a=(x>0)&&((y<=0)&&(z<=0))||(y>0)&&((x<=0)&&(z<=0))||(z>0)&&((y<=0)&&(x<=0));
    if (a==1)
        cout<<"There is only 1 digit > 0";
    
    else
        cout<<"There is no only 1 digit > 0 ";
    
    return 0;
}

