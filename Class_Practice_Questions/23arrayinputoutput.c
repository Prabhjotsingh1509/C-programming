// WAP to take 10 values from the user and store them in an array name numbers. Print the elements stored in the array.
#include<stdio.h>

int main()
{
    int arr[10];
    int i;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The numbers are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
 
    return 0;
}