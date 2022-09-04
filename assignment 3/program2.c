#include<stdio.h>

int main(void)
{
int x;
printf("Enter x: ");
scanf("%d",&x);
if(x % 10 == 0)
{
    printf("Divisible");
}
else
{
    printf("Non-Divisible");
}
return 0;
}