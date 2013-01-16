#include<iostream>
#include<bitset>

using namespace std;

bool isUniqueStr1(char *str)
{
    bitset<256> char_set;

    char *p = str;
    while(*p != '\0')
    {
        if (char_set.test(*p))
            return false;
        else
            char_set.set(*p);
        p++;
    }

    return true;
}

bool isUniqueStr2(char *str)
{
    int checker = 0;
    char *p = str;
    int value;
    while(*p != '\0')
    {
        value = *p - 'a';
        if (checker & (1 >> value))
            return false;
        else
            checker |= 1 >> value;
        p++;
    }

    return true;
}

int main()
{
    char *s = "acef";
    char *s1 = "acefadf";

    bool result = isUniqueStr2(s);
    cout << result << endl;
    result = isUniqueStr2(s1);
    cout << result << endl;

    return 0;
}
