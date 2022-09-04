#include<stdio.h>
#include<conio.h>
int natno(int);
void main()
{
    int i=1,N;
    printf("Enter value of N:");
    scanf("%d",&N);
    natno(N);

     
}
int natno(int a)
{
    int s;
  if(a==0)
    return 0;
  s=natno(a-1);
  printf("%d  ",a);
  return s;

}
