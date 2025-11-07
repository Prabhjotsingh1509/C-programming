#include<stdio.h>

int main()
{
    char stra[80]="A string to be used for demonstration purposes";
    char strb[80];

    char *pa;
    char *pb;
    puts(stra);
    pa=stra;
    puts(pa);
    pb= strb;
    putchar('\n');
    while(*pa != '\0')
    {
        *pb++ = *pa++;
    }
    *pb=('\0');
    puts(strb);
    return 0;
}