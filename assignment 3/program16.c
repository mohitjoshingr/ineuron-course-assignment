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
else if (x >= 65 && x < 97)
{
    printf("character is uppercase\n");
}
else{
    printf("It is a special character\n");
}
return 0;
}