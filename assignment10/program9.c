#include <stdio.h>
int find(int a, int b);
int main(void)
{
    int x, y;
    printf("Enter the Number: ");
    scanf("%d", &x);
    printf("Enter the digit: ");
    scanf("%d", &y);
    int m = find(x,y);
    if(m == 1)
    {
        printf("Number contains the given digit \n");
    }
    else
    {
        printf("Number does not contain the given digit\n");
    }
    return 0;
}
int find(int a, int b)
{
    while (a != 0)
    {
        int r;
        r = a%10;
        if(r == b)
        {
            return 1;
            break;
        }
        a /= 10;
    }
}