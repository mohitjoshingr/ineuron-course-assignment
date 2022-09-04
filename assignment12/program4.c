#include<stdio.h>
#include<conio.h>
int revodd(int,int);
void main()
{
    int x=1,N;
    printf("Enter value of N:");
    scanf("%d",&N);
    revodd(x,N);
    
}
int revodd(int a,int b)
{
    int s;
    if(a==b+1)
        return 0;
    s=revodd(a+1,b);
    printf("%d  ",2*a-1);
    return 0;
}
