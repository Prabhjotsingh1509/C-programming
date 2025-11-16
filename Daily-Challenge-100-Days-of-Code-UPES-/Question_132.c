// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include<stdio.h>
#include<string.h>


enum traffic_light{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char input[50];
    enum traffic_light signal=RED;

    printf("Enter signal (RED / YELLOW / GREEN): ");
    scanf("%s", input);
    if(strcmp(input, "RED") == 0)
        signal = RED;
    else if(strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if(strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid input\n");
        return 0;
    }
    switch(signal)
    {
        case GREEN: 
        printf("Go\n");
        break;
        case YELLOW:
        printf("Wait\n");
        break;
        case RED:
        printf("Stop\n");
        break;  
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/