#include<stdio.h>

int main(void)
{
int x,y;
printf("Enter x & y: ");
scanf("%d%d",&x,&y);
if(x > y)
{
    printf("%d",x);
}
else if(x == y)
{
    printf("%d",x);
}
else
{
    printf("%d",y);
}
return 0;
}