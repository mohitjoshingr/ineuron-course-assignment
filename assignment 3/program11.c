#include<stdio.h>

int main(void)
{
int a,b,c,d,e;
printf("Enter the marsks of the 5 subjects: ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a > 33)
{
    printf("Passed in subject 1\n");
}
else
{
    printf("Failed in subjecet 1\n");
}
if(b > 33)
{
    printf("Passed in subject 2\n");
}
else
{
    printf("Failed in subjecet 2\n");
}
if(c > 33)
{
    printf("Passed in subject 3\n");
}
else
{
    printf("Failed in subjecet 3\n");
}
if(d > 33)
{
    printf("Passed in subject 4\n");
}
else
{
    printf("Failed in subjecet 4\n");
}
if(e > 33)
{
    printf("Passed in subject 5\n");
}
else
{
    printf("Failed in subjecet 5\n");
}
return 0;
}