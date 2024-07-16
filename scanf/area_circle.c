#include<stdio.h>
int main()
{
    float pi=3.14;
    int radius;
    float area;
    
    printf("Radius is:");
    scanf("%d",&radius);
    area=pi*radius*radius;

    printf("The area of CIRCLE is :%0.2f",area);
    return 0;
}