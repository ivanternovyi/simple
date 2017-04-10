#ifndef STRING_STRING_H
#define STRING_STRING_H
#include <iostream>
#include <iostream>

using namespace std;

class String {
private:
    char* cstr;
    short str_len;
public:
    String();

    String(const char* a);

    String(const String& a);

    void concat(String& a);

    String change(String& before, String& after);

    int find(String& a);

    String substr(int index, int length);

    bool is_equal(String& a);

    short size();

    char operator [](int index);

    ~String();

    friend ostream& operator << (ostream& os, const String& a);
};


#endif
