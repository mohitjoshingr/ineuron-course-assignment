#include <stdio.h>
float intrest(float p, float r, float t);
int main()
{

    float principal, rate, time;
    printf("Enter principal,rate and intrest: ");
    scanf("%f%f%f", &principal, &rate, &time);

    printf("Simple Interest = %f\n", intrest(principal,rate,time));

    return 0;
}
float intrest(float p, float r, float t)
{
    return (p * r * t) / 100;
}
