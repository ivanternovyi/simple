
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
        int p, q;
	cout << "Введіть натуральні числа p, q " << endl;
	cin >> p >> q;
	bool a;
	a = (p > 0) && (q > 0) && (p % q) == 0;
	if (a==1)
           cout<<"Числа p і q - рівні!";
        else
           cout<<"Числа p i q - різні!";
    
    return 0;
}

