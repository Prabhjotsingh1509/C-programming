// Q97: Print the initials of a name.
#include<stdio.h>

int main()
{
    int i=0;
    char name[100];

    printf("Enter the name:");
    fgets(name,100,stdin);

    while(name[i] !='\0')
    {
        if(i==0)
        {
            printf("%c.",name[i]);
        }
        if( i>0 && name[i-1] == ' ')
        {
            printf("%c.",name[i]);
        }
        i++;
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
