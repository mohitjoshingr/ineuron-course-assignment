#include <stdio.h>

int main(void)
{
    int f = 0, p = 1, c = 0, n, count = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 0; i >= 0; i++)
    {
        if (c <= n)
        {
            if (i == 0)
            {
                c = f + p;
            }
            else
            {
                c = p + f;
                f = p;
                p = c;

                if (c == n)
                {
                    printf("Number is in Fibonnaci series\n");
                    break;
                }
            }
        }
        else
        {
            printf("Number is not in Fibonnaci series");
            break;
        }
    }
    return 0;
}