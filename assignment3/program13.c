#include<stdio.h>

int main(void)
{
int a;
printf("Enter the number: ");
scanf("%d",&a);
if(a%3 == 0 && a%2 == 0)
{
    printf("Number is divisible by both 3 and 2");
}
else
{
    printf("Number is not divisible by 3 and 2");
}
return 0;
}