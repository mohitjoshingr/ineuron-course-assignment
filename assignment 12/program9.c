#include<stdio.h>
#include<conio.h>
int octal_1(int n);
int octal_2(float f,int n);
int main()
{
    float num,d;
    int N;
    printf("Enter a number:");
    scanf("%f",&num);
    N=(int)(num);
    printf("Octal:\n");
    int tem1=octal_1(N);
    printf(".");
    d=num-N;
    int temp2=octal_2(d,7);
    
    return 0;
}
int octal_1(int n)
{
    int s;
    if(n==0)
     return 0;
     s=octal_1(n/2);
     int x,rem;
     x=n/8;
     x=x*8;
     rem=n-x;
     printf("%d",rem);
     return rem;
}
int octal_2(float f,int m)
{
    if(m==0)
        return 0;
    float temp;
    int l;
    temp=f*8;
    printf("%d",(int)(temp));
    float rem;
    rem=temp-(int)(temp);
    l=octal_2(rem,m-1);
    return l;
}
