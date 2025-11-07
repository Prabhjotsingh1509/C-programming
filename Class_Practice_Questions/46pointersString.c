#include<stdio.h>

int main()
{
    char *s="sanyam";

    while(*s != '\0')
    {
        puts(s);
        printf("\n");
        s++;
    }
}