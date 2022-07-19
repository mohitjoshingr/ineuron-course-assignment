#include<stdio.h>

int main(void)
{
int a,b,c,d;
printf("Enter a,b,c: ");
scanf("%d%d%d",&a,&b,&c);
d = b*b - 4*a*c;
if(d > 0)
{
    printf("Roots are Real and Distinct\n");
}
else if ( d == 0)
{
    printf("Roots are Real and Equal\n");
}
else
{
    printf("Roots are Imaginary\n");
}
return 0;
}