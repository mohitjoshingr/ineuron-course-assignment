#include <stdio.h>

int factorial(int a);
int main(void)
{
    int n, r;
    printf("Enter the value of N & R: ");
    scanf("%d%d", &n, &r);
    int a = factorial(n);
    int b = factorial(n-r);
    printf("Total arrangements:  %d", a /b);
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