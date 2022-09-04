#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", i + 1);
    }
    return 0;
}