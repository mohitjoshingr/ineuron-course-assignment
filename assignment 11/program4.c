#include <stdio.h>
#include <conio.h>
int prime(int n);
void main()
{
    int num, res = 0;

    printf("\nENTER A NUMBER: ");
    scanf("%d", &num);
    res = prime(num);
    printf("The next prime: %d", res);
}
int prime(int n)
{
    int i;
    int count = 0;
    for (int i = 1; i > 0; i++)
    {
        for (int j = 2; j < (n + i) / 2; j++)
        {
            if ((n + i) % j == 0)
            {
                break;
            }
            else
            {
                return n + i;
                break;
            }
        }
    }

    // return 0;
}