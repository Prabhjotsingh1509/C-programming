/*using the following pointers expressions:
x= *ptr++
x= *++ptr
x=++*ptr
x= (*ptr) ++;*/

// Wap to interpret the following 
// suppose, value at address 2000 is 25.value at address 2002 is 38 ptr is an integer pointer that contains address 2000 the value of *ptr is 25 Find the o/p or the value of x from the above cases?
#include <stdio.h>

int main() {
    // address 2000 → arr[0]
    // address 2002 → arr[1]
    int arr[2] = {25, 38};
    int *ptr = arr;   
    int x;

    // 1. case
    ptr = arr;  
    x = *ptr++;
    printf("1. x = *ptr++; \n");
    printf("x = %d\n", x);
    printf("ptr now points to simulated address 2002  value = %d\n\n", *ptr);
    // 2. case
    ptr = arr;  
    x = *++ptr;
    printf("2. x = *++ptr; \n");
    printf("x = %d\n", x);
    printf("ptr now points to simulated address 2002  value = %d\n\n", *ptr);
    // 3. case
    ptr = arr;  
    x = ++*ptr;
    printf("3. x = ++*ptr; \n");
    printf("x = %d\n", x);
    printf("Value at address 2000 is now = %d\n\n", arr[0]);
    // 4. case
    ptr = arr;  
    x = (*ptr)++;
    printf("4. x = (*ptr)++; \n");
    printf("x = %d\n", x);
    printf("Value at address 2000 is now = %d\n\n", arr[0]);

    return 0;
}
