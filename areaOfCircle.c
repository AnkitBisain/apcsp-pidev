#include <stdio.h>

double areaOfCircle(double d){
  return 3.14*d*d;
}

int main()
{
  for(double c = 3.5; c < 13; c++){
    printf("If radius is %f, area is %f\n",c,areaOfCircle(c));
  }
}
