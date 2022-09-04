#include<stdio.h>
#include<conio.h>
int revnum(int);
int main()
{
    int m,num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\n After reversing:");
    m=revnum(num);
     
    return 0;
}
int revnum(int a)
{
   if(a==0)
        return 0;
   printf("%d",a%10);
   int t=revnum(a/10);
   return t;
}
