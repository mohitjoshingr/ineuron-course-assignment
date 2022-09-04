#include<stdio.h>

int main(void)
{
float inr,usd;
printf("Enter the ammount in INR: ");
scanf("%f",&inr);
usd = inr/76.23;
printf("The %f INR in USD is: %0.2f",inr,usd);
return 0;
}