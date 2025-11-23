// Wap that declare differnet types of pointers(int,char,float) and intialize them with the addresses of variables.Print the valuesfor both the pointers and the variables they point to?
#include<stdio.h>

int main()
{
    int a=10;
    char b='p';
    float c=12.50;

    int *ptr1;
    char *ptr2;
    float *ptr3;

    ptr1=&a;
    ptr2=&b;
    ptr3=&c;

    printf("Value of a:%d\n",a);
    printf("Value of b: %c\n", b);
    printf("Value of c: %.2f\n\n", c);

    printf("Address of a: %p\n", (void*)ptr1);
    printf("Address of b: %p\n", (void*)ptr2);
    printf("Address of c: %p\n\n", (void*)ptr3);

    printf("Value using ptr1: %d\n", *ptr1);
    printf("Value using ptr2: %c\n", *ptr2);
    printf("Value using ptr3: %.2f\n", *ptr3);

    return 0;
}