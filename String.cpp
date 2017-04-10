#include "String.h"
#include "cstring"


using namespace std;

String::String()
{
    str_len = 1;
    cstr = new char[str_len];
    cstr[str_len - 1] = '\0';
}

String::String(const char *a)
{
    str_len = strlen(a) + 1;
    cstr = new char[str_len];
    for(int i = 0; i < str_len - 1; i++)
    {
        cstr[i] = a[i];
    }
}

String::String(const String& a)
{
    this->str_len = a.str_len;
    cstr = new char[str_len];
    for(int i = 0; i < str_len - 1; i++)
    {
        cstr[i] = a.cstr[i];
    }
    if(cstr[str_len - 1] != '\0')
    {
        cstr[str_len - 1]   = '\0';
    }
}

String String::change(String& before, String& after)
{
    String temp(this->cstr);
    int pos = temp.find(before);
    if(pos == -1)
    {
        cout << "Cannot change!\n";
        return EXIT_SUCCESS;
    }
    else
    {
        this->cstr = NULL;
        if(before.size() < after.size())
        {
            str_len = this->size() + (after.size() - before.size()) + 1;
            cstr = new char[str_len + pos];
        }
        else if(before.size() > after.size())
        {
            str_len = this->size() - (before.size() - after.size()) + 1;
            cstr = new char[str_len + pos];
        }
        else
        {
            str_len = this->size() + 1;
            cstr = new char[str_len + pos];
        }
        for(int i = 0; i < pos ; i++)
        {
            this->cstr[i] = temp.cstr[i];
        }
        for(int i = pos  , j = 0; i < after.size() + pos + 1; i++, j++)
        {
            this->cstr[i] = after.cstr[j];
        }
        for(int i = after.size() + pos , j = 0; i < this->str_len + pos ; i++, j++)
        {
            this->cstr[i] = temp.cstr[j + pos + before.size()];
        }
        return *this;
    }
    return EXIT_SUCCESS;
}

int String::find(String& a)
{
    String th = *this;
    int pos = -1;
    if(a.size() > this->size())
    {
        return pos;
    }
    else if(a.size() == this->size())
    {
        return 0;
    }
    for(int i = 0; i < this->size(); i++)
    {
        if(th.substr(i, a.size()).is_equal(a))
        {
            return i;
        }
    }
    return pos;
}

String String::substr(int index, int length)
{
    short size = length + 1;
    char* temp = new char[size];
    int j = 0;
    for(int i = index, j = 0; i < index + length + 1; i++, j++)
    {
        temp[j] = cstr[i];
    }
    String sub;
    sub.str_len = size;
    delete[] sub.cstr;
    sub.cstr = new char[size];
    for(int m = 0; m < size - 1; m++)
    {
        sub.cstr[m] = temp[m];
    }
    return sub;
}


bool String::is_equal(String& a)
{
    if(this->str_len != a.str_len)
    {
        return false;
    }
    else
    {
        for(int i = 0; i < str_len ; i++)
        {
            if(cstr[i] != a.cstr[i])
            {
                return false;
            }
        }
        return true;
    }
}

void String::concat(String &a)
{
    String temp(this->cstr);
    delete[] cstr;
    cstr = new char[a.size() + str_len + 1];
    for(int i = 0; i < str_len; i++)
    {
        cstr[i] = temp.cstr[i];
    }
    for(int i = str_len - 1, j = 0; i < a.size() + str_len - 1 ; i++, j++)
    {
        cstr[i] = a.cstr[j];
    }
}

short String::size()
{
    return this->str_len - 1;
}

char String::operator [](int index)
{
    return cstr[index];
}

String::~String()
{
    delete[] cstr;
}

ostream& operator << (ostream& os, const String& a)
{
    os << a.cstr;
    return os;
}