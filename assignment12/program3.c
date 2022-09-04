#include <stdio.h>
#include <conio.h>
int oddN(int);
void main()
{
    int N;
    printf("Enter value of N:");
    scanf("%d", &N);
    oddN(N);
}
int oddN(int b)
{
    if (b == 0)
        return 0;
    oddN(b - 1);
    printf("%d  ", (2 * b) - 1);
    return 0;
}
