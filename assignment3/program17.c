#include<stdio.h>

int main(void)
{
int a,b,c;
printf("Enter values: ");
scanf("%d%d%d",&a,&b,&c);
if(a + b > c || b + c > a || c + a > b)
{
    printf("Triangle is valid\n");
}
else
{
    printf("Triangle is not valid\n");
}
return 0;
}