#include <stdio.h>

int main(void)
{
    int n, c = 0, x = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++)
      {
        c+=i*i*i;
      }
        printf("The sum of cubes of first N natural no. is: %d", c);
    return 0;
}