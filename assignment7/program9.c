#include <stdio.h>

void main()
{
    int num, rem, sum = 0, temp;

    printf("Input  a number: ");
    scanf("%d", &num);

    for (temp = num; num != 0; num = num / 10)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
    }
    if (sum == temp)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);
}