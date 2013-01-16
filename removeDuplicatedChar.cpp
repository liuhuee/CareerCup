#include<iostream>
#include<bitset>

using namespace std;

void removeDuplidatedChar(char *str)
{
    bitset<256> char_set;

    if (str == NULL)
        return;
    char *p = str;
    char *tail = str;

    while(*p)
    {
        if (char_set.test(*p))
        {
            p++;
        }
        else
        {
            char_set.set(*p);
            *tail++ = *p++;
        }
    }

    *tail = 0;
}

int main()
{
    char str[] = "abcdabcddddd";
    removeDuplidatedChar(str);

    printf("%s\n",str);

    return 0;
}
