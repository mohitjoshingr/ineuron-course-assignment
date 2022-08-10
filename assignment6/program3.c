#include <stdio.h>

int main(void)
{
    int n, c = 0, x = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int i = 1;
    while (x != n)
    {
        if (i % 2 != 0)
        {
            c += i;
            x++;
        }
            i++;
    }

    printf("The sum of first N odd natural no. is: %d", c);
    return 0;
}