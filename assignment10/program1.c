#include<stdio.h>
float area (float r);
int main(void)
{
 float radius;
 printf("Enter the radius of circle: ");
 scanf("%f",&radius);
 printf("Area of circle is: %f",area(radius));

return 0;
}
float area (float r)
{
    return 3.14*r*r;
}