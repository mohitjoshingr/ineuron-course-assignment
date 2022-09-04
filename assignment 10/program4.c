#include <stdio.h>
void NaturalNumber(int a);

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    NaturalNumber(n);
    return 0;
}
void NaturalNumber(int a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%d ",i);
    }
    
}
