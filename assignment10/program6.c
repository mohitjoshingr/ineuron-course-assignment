#include <stdio.h>

int factorial(int a);
int main(void)
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The factorial of a %d: %d",n,factorial(n));
    return 0;
}
int factorial(int a)
{
    int  c = 1;

    for (int i = 0; i < a; i++)
    {
        c *= (a - i);
    }
    return c;
}