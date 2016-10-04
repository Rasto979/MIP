#include <stdio.h>

int main()
{
  float a,b,c;
  scanf("%f %f",&a,&b);
  a=a/100;
  c=(b/(a*a));
  printf("BMI: %.3f",c);
  return 0;
}
