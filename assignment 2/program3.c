#include<stdio.h>

int main(void)
{
int x,y;
printf("Enter the values of the x and y: ");
scanf("%d%d",&x,&y);
int temp = x;
 x = y;
 y = temp;
 printf("The value of x is: %d\nThe value of y is: %d",x,y);
 

return 0;
}