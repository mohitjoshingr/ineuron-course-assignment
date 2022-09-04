#include <stdio.h>

int main(void)
{
    int f=0, p=1, c = 0, n, count = 0;
    printf("Enter the no. of terms: ");
    scanf("%d", &n);
    printf("Fibonnaci Series is: ");
    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        { 
            c = p + f;
            printf("1 ");
        }
        else
        {
            if(count != n)
            {
                c = p + f;
                f = p;
                p = c;
                printf("%d ",c);
            }
        }
    }
    return 0;
}