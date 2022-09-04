#include <stdio.h>

int factorial(int a);
int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
      sum += factorial(i)/i;
    }
    printf("Sum: %d",sum);
    return 0;
}
int factorial(int a)
{
    int c = 1;

    for (int i = 0; i < a; i++)
    {
        c *= (a - i);
    }
    return c;
}