#include <stdio.h>
void OddNaturalNumber(int a);

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    OddNaturalNumber(n);
    return 0;
}
void OddNaturalNumber(int a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%d ",2*i - 1);
    }
    
}
