
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int k, n;
    cout<<"Введіть два числа: ";
    cin>>k>>n;
    bool a, b;
    a=((k%2==1)&&(n%2==1));
    b=((k%2==0)&&(n%2==0));
    if (a==1)
        cout<<"Обидва числа непарні";
    else if (b==1)
         cout<<"Обидва числа парні";
    else     
    cout<<"Одне число є парним а інше непарним";
    
    
    return 0;
}

