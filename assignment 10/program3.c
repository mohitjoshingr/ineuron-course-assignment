#include<stdio.h>
int Odd_Even(int a);
int main(void)
{
int x;
printf("Enter x: ");
scanf("%d",&x);
printf("%d ",Odd_Even(x));

return 0;
}
int Odd_Even(int a)
{
    if(a%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}