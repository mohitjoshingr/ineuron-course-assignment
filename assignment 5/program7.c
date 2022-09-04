#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        printf("%d ", 2*i);
    }
    return 0;
}