#include<stdio.h>

void reverseStr(char *str)
{
    char *start = str;
    char *end = str;
    char temp;
    if (str)
    {
        while(*end)
        {
            end++;
        }
        --end;
        while(start < end)
        {
            temp = *start;
            *start++ = *end;
            *end-- = temp;
        }
    }
}

int main()
{
    char s[] = "hello";
    reverseStr(s);
    printf("%s\n", s);
    return 0;
}
