#include "String.h"
#include "Markov.h"

using namespace std;

int main() {
    clock_t t1,t2;
    t1=clock();
    String c("11111111111111+111111111111");
    String v("11111111111111111-111111111");
    Markov mar, mar1;
    mar1.subtraction(v);
    mar.addition(c);
    t2=clock();
    float diff = (float)t2 - (float)t1;
    cout << "Runtime for own String: " << diff << endl;
    clock_t t4,t3;
    t3 = clock();
    string b("11111111111111+111111111111");
    string b1("11111111111111111-111111111");
    Markov mar3, mar2;
    mar2.subtraction(b1);
    mar3.addition(b);
    t4 = clock();
    float diff2 = (float)t4 - (float)t3;
    cout << "Runtime for basic_string: " << diff2 << endl;
    return 0;
}