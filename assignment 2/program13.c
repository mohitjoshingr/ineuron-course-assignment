#include<stdio.h>

int main(void)
{
int x;
printf("Enter x: ");
scanf("%d",&x);
int a,b,c,d;
a = x%10;
b = (x/10)%10;
c = (x/100)%10;
d = a*100 + c*10 + b*1;
printf("The no. %d after rotating 1 digit toward right becames: %d",x,d);


return 0;
}