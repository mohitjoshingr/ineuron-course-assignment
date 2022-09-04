#include<stdio.h>
#include<conio.h>
int revpri(int,int);
void main()
{
    int n,i=1;
    printf("Enter value of N:");
    scanf("%d",&n);
    revpri(i,n);
     
}
int revpri(int a,int b)
{
    int s;
    if(a==b+1)
        return 0;
    s=revpri(a+1,b);
    printf("%d  ",a);
    return s;

}
