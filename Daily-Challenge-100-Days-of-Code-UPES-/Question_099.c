// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include<stdio.h>
#include<string.h>

int main()
{
    char date[100];
    char day[3],month[3],year[5];
    int i=0;

    printf("Enter the date in dd/01/yyyy:");
    fgets(date,100,stdin);

    strncpy(day,date,2);
    day[2]='\0';

    strncpy(month,date+3,2);
    month[2]='\0';

    strncpy(year,date+6,4);
    year[4]='\0';

    if(strcmp(month,"04") == 0)
    {
        printf("%s-Apr-%s",day,year);
    }
    else{
        printf("month is not 4");
    }

    return 0;
    
}
/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/