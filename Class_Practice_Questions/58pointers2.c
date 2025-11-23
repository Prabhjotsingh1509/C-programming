// Perform pointer arithmetic on pointers (increment/decrement) of different data types and observe the changes in memory address and the affects on data access.
#include <stdio.h>

int main()
{
    int a=10;
    char b='A';
    float c=5.75;

    int *p1=&a;
    char *p2=&b;
    float *p3=&c;

    printf("Initial Addresses:\n");
    printf("p1 (int*)= %p\n",p1);
    printf("p2 (char*)= %p\n",p2);
    printf("p3 (float*)= %p\n\n",p3);
    p1++;
    p2++;
    p3++;
    printf("After Increment:\n");
    printf("p1(p1+1)= %p\n",p1);
    printf("p2(p2+1)= %p\n",p2);
    printf("p3(p3+1)= %p\n\n",p3);
    p1--;
    p2--;
    p3--;
    printf("After Decrement (Back to Original):\n");
    printf("p1= %p\n",p1);
    printf("p2= %p\n",p2);
    printf("p3= %p\n\n",p3);

    printf("Value at p1 = %d\n",*p1);
    printf("Value at p2 = %c\n",*p2);
    printf("Value at p3 = %.2f\n",*p3);

    return 0;
}
