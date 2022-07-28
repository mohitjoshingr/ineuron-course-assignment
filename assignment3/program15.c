#include<stdio.h>

int main(void)
{
int a;
printf("Enter the number: ");
scanf("%d",&a);
if(a > 0)
{
    printf("Number is postive\n");
}
else if(a < 0)
{
    printf("Number is negative\n");
}
else 
{
    printf("Number is zero");
}
return 0;
}