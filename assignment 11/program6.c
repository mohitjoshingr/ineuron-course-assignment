#include <stdio.h>
void PrintPrime(int low, int high);
int main()
{
    int l, h;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);
    printf("Prime numbers between %d and %d are: ", l, h);
    PrintPrime(l,h);

    return 0;
}
void PrintPrime(int low, int high)
{
    int i, flag;
    while (low < high)
    {
        flag = 0;

        if (low <= 1)
        {
            ++low;
            continue;
        }

        for (i = 2; i <= low / 2; ++i)
        {

            if (low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }
}