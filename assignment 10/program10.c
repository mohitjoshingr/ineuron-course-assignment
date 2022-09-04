#include <stdio.h>
void factors(int a);
int main(void)
{
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);
    factors(x);
    return 0;
}
void factors(int a)
{
    int count;
    while (1)
    {
        if (a != 1)
        {
            for (int i = 2; i <= a; i++)
            {
                if (a % i == 0)
                {
                    a = a / i;
                    printf("%d ", i);
                    break;
                }

                else
                {
                    continue;
                }
            }
        }
        else
        {
            break;
        }
    }
}