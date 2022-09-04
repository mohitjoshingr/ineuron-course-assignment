#include <stdio.h>

int main(void)
{
    int x, y, lcm,hcf;
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
     hcf = x*y/lcm;
     if(hcf == 1)
     {
        printf("%d and %d are co-prime",x,y);
     }
     else 
     {
        printf("%d and %d are not a co-prime",x,y);
     }
    
    return 0;
}