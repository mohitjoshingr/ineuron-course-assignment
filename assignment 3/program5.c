#include<stdio.h>

int main(void)
{
int x;
printf("Enter x: ");
scanf("%d",&x);
int y = x/100;
if(y >= 1 && y < 10)
{
    printf("%d is 3 digit number",x);
}
else
{
    printf("%d is Not a 3 digit number",x);
}
return 0;
}