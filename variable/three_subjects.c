#include<stdio.h>
int main()
{
    int maths=50,sci=60,eng=70,totalmarks;
    float percentage;
    totalmarks=maths+sci+eng;
    percentage=totalmarks/3;

    printf("Total marks:%d\n",totalmarks);
    printf("Percentage:%0.2f",percentage);
    return 0;
}