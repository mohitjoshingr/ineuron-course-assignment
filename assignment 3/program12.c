#include<stdio.h>

int main(void)
{
char a;
printf("Enter the character: ");
scanf("%c",&a);
int x = a;
if( x >= 97 )
{
    printf("character is lowercase\n");
}
else
{
    printf("character is uppercase\n");
}
return 0;
}