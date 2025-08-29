//Q17: Write a program to find the roots of a quadratic equation and categorize them.//
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,root1,root2;
    printf("enter the coffecient of x2,x and c");
    scanf("%f %f %f",&a,&b,&c);
    d=(pow(b,2)-4*a*c);
    if(d>0)
    {
        //two distinct roots//
        root1=(-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;
        printf("Roots are real and different:%f\n%f",root1,root2);
    }
    else if(d==0)
    {
        //one single root//
        root1=root2=-b/2*a;
        printf("roots are real and equal:%f",root1);
    }
    else
    {
        printf("complex root exist");
    }
    


}
/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/