#include<stdio.h>
int main()
{
    int height,base;
    float area;
    
    printf("Height is:");
    scanf("%d",&height);
    printf("Base is:");
    scanf("%d",&base);
    area=height*base*0.5;

    printf("The area of TRIANGLE is :%0.2f",area);
    return 0;
}