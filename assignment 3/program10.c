#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Selling price: ");
    scanf("%d", &a);
    printf("Cost price: ");
    scanf("%d", &b);
    c = a - b;
    printf("Profit: %d",c);
    


    return 0;
}