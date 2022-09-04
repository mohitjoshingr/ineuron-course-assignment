#include <stdio.h>

int main(void)
{
    int n,x = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int m = n;
while (n != 0)
{
     if(n != 0)
     {
        n = n/10;
        x++;
     }
}

        printf("The no. of digit in the no. %d: %d",m, x);
    return 0;
}