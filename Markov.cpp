#include "Markov.h"


using namespace std;

String Markov::subtraction(String &a)
{
    String before("1-1");
    String after("-");
    int pos = a.find(before);
    while(pos != -1)
    {
        a.change(before, after);
        pos = a.find(before);
    }
    return a;
}

String Markov::addition(String &a)
{
    String before("1+1");
    String after("11+");
    int pos = a.find(before);
    while(pos != -1)
    {
        a.change(before, after);
        pos = a.find(before);
    }
    return a;
}

string Markov::addition(string b)
{
    string before("1+1");
    string after("11+");
    int pos = b.find(before);
    while(pos >= 0 && pos <=b.size())
    {
        b.replace(pos, before.length(), after);
        pos = b.find(before);
    }
    return b;
}

string Markov::subtraction(string b)
{
    string before("1-1");
    string after("-");
    int pos = b.find(before);
    while(pos >= 0 && pos <=b.size())
    {
        b.replace(pos, before.length(), after);
        pos = b.find(before);
    }
    return b;
}