#include<stdio.h>

int main(void)
{
int x;
printf("Enter the x: ");
scanf("%d",&x);
int z = x%10;
x = x - z;
printf("Final digit is: %d",x);
return 0;
}