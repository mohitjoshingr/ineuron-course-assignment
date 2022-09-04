#include<stdio.h>
#include<conio.h>
int revevenN(int,int);
void main()
{
    int x=1,N;
    printf("Enter value of N:");
    scanf("%d",&N);
    revevenN(x,N);
    
}
int revevenN(int a,int b)
{
    int s;
    if(a==b+1)
    return 0;
    s=revevenN(a+1,b);
    printf("%d  ",2*a);
    return s;

}
