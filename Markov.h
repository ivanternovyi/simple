#ifndef STRING_MARKOV_H
#define STRING_MARKOV_H

#include "String.h"
#include <string>


using namespace std;

class Markov {
public:
    String subtraction(String& a);

    String addition(String& a);

    string addition(string b);

    string subtraction(string b);
};


#endif
