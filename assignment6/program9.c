#include <stdio.h>

int main(void)
{
    int x, y, lcm;
    printf("Enter the two number: ");
    scanf("%d%d", &x, &y);
    int count = 0;
    for (int i = 1; i >= 0; i++)
    {
        if (x < y)
        {
            for (int j = 1; j >= 0; j++)
            {
                if (x* j == y * i)
                {
                    lcm = x * j;
                    count = 1;
                    break;
                }
                else if(x*j > y*i)
                {
                    break;
                }
            }
        }
        else
        {
            for (int j = 1; j >= 0; j++)
            {
                if (y * j == x * i)
                {
                    lcm = x * i;
                    count = 1;
                    break;
                }
                else if(y*j > x*i)
                {
                    break;
                }
            }
        }
        if(count == 1)
        {
            break;
        }
    }
    printf("Lcm of %d & %d: %d", x, y, lcm);
    return 0;
}