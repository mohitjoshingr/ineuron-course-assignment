#include<stdio.h>

int main(void)
{
int x;
printf("Enter x: ");
scanf("%d",&x);
if(x > 0)
{
    printf("Positive");
}
else
{
    printf("Non-Positive");
}
return 0;
}