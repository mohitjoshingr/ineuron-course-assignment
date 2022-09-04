#include<stdio.h>
#include<conio.h>
int evenN(int);
void main()
{
    int x=2,N;
    printf("Enter value of N:");
    scanf("%d",&N);
    evenN(N);
     
}
int evenN(int b)
{
    int s;
    if(b==0)
        return 0;
    s=evenN(b-1);
    printf("%d  ",2*b);
    return s;
}
