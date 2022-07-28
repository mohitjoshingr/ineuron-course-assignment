#include<stdio.h>

int main(void)
{
int a;
printf("Enter the number: ");
scanf("%d",&a);
if(a%3 == 0 || a%7 == 0)
{
    printf("Number is divisible");
}
else
{
    printf("Number is not divisible 3 or 7");
}
return 0;
}