#include<stdio.h>

int main(void)
{
int x,n;
printf("Enter the x: ");
scanf("%d",&x);
n = x;
int a = x%10;
x = x/10;
int b = x%10;
x = x/10;
int c = x%10;
printf("The sum of the digits of the %d is: %d",n,a+b+c);
return 0;
}