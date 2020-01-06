#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  float d = 0.00;
  float e = 1.00;
  float* ptrtod = &d;
  float* ptrtoe = &e;
  printf("d has value %f and pointer %f\n", d, ptrtod);
  printf("e has value %f and pointer %f\n", e, ptrtoe);
  float temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;
  printf("d has value %f and pointer %f\n", d, ptrtod);
  printf("e has value %f and pointer %f\n", e, ptrtoe);

}
