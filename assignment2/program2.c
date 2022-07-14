#include<stdio.h>

int main(void)
{
int x;
printf("Enter the no. x: ");
scanf("%d",&x);
int y = x/10;
printf("The number %d without its last digit is: %d",x,y);
return 0;
}