#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Put the value of radius = ");
    scanf("%d",&r);
    area = 3.14 * r * r;
    printf("Area of circle = %f", area);
    return 0;
}