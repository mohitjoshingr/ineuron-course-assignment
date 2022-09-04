#include <stdio.h>
int square(int a);
int main(void)
{
    int x,y;
    printf("Enter the value: ");
    scanf("%d", &x);
    y = square(x);
    printf("Square of %d is: %d",x,y);

    return 0;
}
int square(int a)
{
    return a*a;
}