// WAP to take 10 values from the user and store them in an array name numbers. Print the elements stored in the array.
#include<stdio.h>

int main()
{
    int number[10];
    int i;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
    }
    printf("The numbers are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", number[i]);
    }
 
    return 0;
}