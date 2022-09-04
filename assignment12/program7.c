#include<stdio.h>
int square(int x);
int main(void)
{
  int n;
  printf("Enter the value of N: ");
  scanf("%d",&n);
  square(n);

return 0;
}
int square(int x)
{
    int s;
    if(x == 1)
    {
        return 0;
    }
    s = square(x-1);
    printf("%d ",x);
    return x*x;

}