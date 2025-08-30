#include<stdio.h>

int main(){
    float a,b,c,d,e,f,g;

    printf("Enter the marks of 7 subjects=");
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    
    printf("Average marks of 7 subjects= %f",(a+b+c+d+e+f+g)/7);
    return 0;
}