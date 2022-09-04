#include<stdio.h>

int main(void)
{
int a;
printf("Enter the month number: ");
scanf("%d",&a);
if(a == 1)
{
    printf("Number of days: 31");
}
else if(a == 2)
{
    printf("Number of days: 28");
}
else if(a == 3)
{
    printf("Number of days: 31");
}
else if(a == 4)
{
    printf("Number of days: 30");
}
else if(a == 5)
{
    printf("Number of days: 31");
}
else if(a == 6)
{
    printf("Number of days: 30");
}
else if(a == 7)
{
    printf("Number of days: 31");
}
else if(a == 8)
{
    printf("Number of days: 31");
}
else if(a == 9)
{
    printf("Number of days: 30");
}
else if(a == 10)
{
    printf("Number of days: 31");
}
else if(a == 11)
{
    printf("Number of days: 30");
}
else if ( a == 12)
{
    printf("Number of days: 31");
}
else
{
    printf("Invalid month\n");
}
return 0;
}