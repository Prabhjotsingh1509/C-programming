#include<stdio.h>

int main()
{
    int i;
    i=1;
    printf("The odd numbers:\n");
    do{
        if(i%2 !=0)
        {
            printf("%d ",i);
        }
        i++;
    }while(i<=100);
    i=1;
    printf("The even numbers:\n");
    do{
        if(i%2==0)
        {
            printf("%d ",i);
        }
        i++;
    }while(i<=100);
    return 0;
    }