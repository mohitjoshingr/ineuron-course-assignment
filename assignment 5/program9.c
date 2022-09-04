#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i * i * i);
    }
    return 0;
}