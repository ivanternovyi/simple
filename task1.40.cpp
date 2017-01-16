#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int sec;
    cout<<"Введіть кількість секунд : ";
    cin>>sec;
    int hours, minutes, seconds;
    hours=sec/3600;
    minutes=(sec%3600)/60;
    seconds=(sec%3600)%60;
    cout<<"Дана кількість секунд =  "<<hours<<" годин, "<<minutes<<" хвилин, "<<
            seconds<<" секунд";
    
    
    
    return 0;
}

