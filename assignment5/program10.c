#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }
    return 0;
}