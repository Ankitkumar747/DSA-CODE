#include<stdio.h>
int main()
{
    float maths, english, chemistry, physics, biology;
    printf("Maths marks= ");
    scanf("%f",&maths);
    printf("English marks= ");
    scanf("%f",&english);
    printf("Chemistry marks= ");
    scanf("%f",&chemistry);
    printf("Physics marks= ");
    scanf("%f",&physics);
    printf("Biology marks= ");
    scanf("%f",&biology);
    float p = (maths + english + chemistry + physics + biology)/5;
    printf("Percentage of 5 subjects is : %f",p);
    return 0;
    }