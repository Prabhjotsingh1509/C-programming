#include<stdio.h>

int main(){
    int n;
    float y,m,w;
    printf("Enter the no. of days=");
    scanf("%d",&n);
    y=n/365;
    m=y*12;
    w=y*52;
    printf("years form=%f\n",y);
    printf("month form=%f\n",m);
    printf("month form=%f\n",w);
    return 0;

}