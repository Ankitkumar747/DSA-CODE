#include<stdio.h>
int main()
{
    float r;
    printf("Enter radius= ",r);
    scanf("%f",&r);
    float v = (4*3.14*r*r*r)/3;
    printf("Volume of a sphere = %f",v);
    return 0;
}