#include<stdio.h>
int main()
{
    int length,breadth;
    int area;
    
    printf("Length is:");
    scanf("%d",&length);
    printf("Breadth is:");
    scanf("%d",&breadth);
    area=length*breadth;

    printf("The area of RECTANGLE is :%d",area);
    return 0;
}