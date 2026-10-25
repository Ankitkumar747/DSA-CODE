#include<stdio.h>
int main()
{
    float p, r, t;
    printf("Enter Principle= ");
    scanf("%f",&p);
    printf("Enter Rate= ");
    scanf("%f",&r);
    printf("Enter Time= ");
    scanf("%f",&t);
    float si= (p*r*t)/100;
    printf("Simple interest= %f",si);
    return 0;
}