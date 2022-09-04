#include <stdio.h>

int main(void)
{
    int f = 0, p = 1, c = 0, n, count = 0;
    printf("Enter the term: ");
    scanf("%d", &n);

    for (int i = 0; i >= 0; i++)
    {
        if (i == 0)
        {
            c = f + p;
            count++;
        }
        else
        {
            if (count != n)
            {
                c = p + f;
                f = p;
                p = c;
                count++;
            }
            else
            {
                break;
            }
        }
    }

    printf("\nThe %dth term is:  %d", n, c);
    return 0;
}