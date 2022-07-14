#include<stdio.h>

int main(void)
{
int x;
printf("Enter x: ");
scanf("%d",&x);
int y = x & 1;
printf("LSB is %d",y);


return 0;
}