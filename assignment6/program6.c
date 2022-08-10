#include <stdio.h>

int main(void)
{
    int n, c = 1, x = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
      {
        c *= (n-i);
      }
        printf("The factorial of a %d: %d",n, c);
    return 0;
}