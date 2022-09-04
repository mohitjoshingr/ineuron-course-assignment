#include <stdio.h>
void PrintPrime(int n);
int main()
{
    int x;

    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &x);
    PrintPrime(x);

    return 0;
}

void PrintPrime(int n)
{
    int i = 3, count, c;

    if (n >= 1)
    {
        printf("\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }

    for (count = 2; count <= n; i++)
    {

        for (c = 2; c < i; c++)
        {
            if (i % c == 0)
                break;
        }

        if (c == i)
        {
            printf("%d ", i);
            count++;
        }
    }
}