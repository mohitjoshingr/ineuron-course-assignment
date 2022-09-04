#include<stdio.h>

int main(void)
{
int x,n;
printf("Enter x: ");
scanf("%d",&x);
printf("Enter the of n to append in x: ");
scanf("%d",&n);
int z = x*10;
int a = z + n;
printf("Final NO. is:%d",a);
return 0;
}