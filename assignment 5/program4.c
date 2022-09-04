#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++ )
    {
        printf("%d ", 2*i + 1);
    }
    return 0;
}