#include<stdio.h>
#include<conio.h>
int interger(int n);
int deci(float f,int n);
int main()
{
    float num,d;
    int N;
    printf("Enter a number:");
    scanf("%f",&num);
    N=(int)(num);
    printf("Binary :\n");
    int tem1=integer(N);
    printf(".");
    d=num-N;
    int temp2=deci(d,10);
     
    return 0;
}
int integer(int n)
{
    int s;
    if(n==0)
     return 0;
     s=integer(n/2);
     int x,rem;
     x=n/2;
     x=x*2;
     rem=n-x;
     printf("%d",rem);
     return rem;
}
int deci(float f,int m)
{
    if(m==0)
        return 0;
    float temp;
    int l;
    temp=f*2;
    printf("%d",(int)(temp));
    float rem;
    rem=temp-(int)(temp);
    l=deci(rem,m-1);
    return l;
}

