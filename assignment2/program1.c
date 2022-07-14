#include<stdio.h>

int main(void)
{
int x;
printf("Enter the x: ");
scanf("%d",&x);
printf("The unit digit of %d is: %d",x,x%10);
return 0;
}