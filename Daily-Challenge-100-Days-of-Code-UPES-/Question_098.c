// Q98: Print initials of a name with the surname displayed in full.
#include<stdio.h>

int main()
{
    int i=0,countspace=0,j=1;
    char name[100];

    printf("Enter the name:");
    fgets(name,100,stdin);

    while(name[i] !='\0')
    {
        if(name[i]==' ')
        {
            countspace++;
        }
        i++;
    }
        for(i=0;name[i]!='\0';i++)
        {
            if(i==0)
            {
                printf("%c.",name[i]);
            }
            else if(name[i-1]== ' ' && j<countspace)
            {
                printf("%c.",name[i]);
                j++;
            }
            else if(j==countspace && name[i-1]==' ')
            {
                while(name[i]!='\0')
                {
                    printf("%c",name[i]);
                    i++;
                }
            }
        }
    return 0;
}
/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
