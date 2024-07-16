#include<stdio.h>
int main()
{
    int p,r,t;
    int i;
    
    printf("P is:");
    scanf("%d",&p);
    printf("R is:");
    scanf("%d",&r);
    printf("T is:");
    scanf("%d",&t);
    i=p*r*t/100;

    printf("SIMPLE INTEREST IS:%d",i);
    return 0;
}