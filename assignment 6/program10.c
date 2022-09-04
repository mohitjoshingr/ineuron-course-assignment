#include <stdio.h>

int main(void)
{
    int x, y, rev = 0;
    printf("Enter the Number: ");
    scanf("%d", &x);

    while (x != 0)
    {
        rev = x % 10 + rev * 10;
        x /= 10;
    }
    printf("%d", rev);
    return 0;
}