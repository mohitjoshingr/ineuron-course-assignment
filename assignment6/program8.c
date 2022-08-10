#include<stdio.h>

int main(void)
{
int x;
printf("Enter the Number: ");
scanf("%d",&x);
int count = 1;
for(int i = 2; i < x/2;i++)
{
  if(x%i == 0)
  {
   count = 0;
   break;
  }
  else
  {
    count = 1;
  }
}
if(count == 0)
{
    printf("No. is not a Prime\n");
}
else
{
    printf("No. is Prime\n");
}
return 0;
}