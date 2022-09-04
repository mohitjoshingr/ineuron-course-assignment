#include<stdio.h>

int main(void)
{
int x;
printf("Enter x: ");
scanf("%d",&x);
int y = x & 1;
if(y == 1)
{
    printf("%d is odd",x);
}
else
{
    printf("%d is even",x);
}
return 0;
}