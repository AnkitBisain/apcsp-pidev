#include<stdio.h>

int main()
{
  int a = -545;
  double d = 1.234;
  float f = 12.34;
  char c = 'q';
  unsigned int u = 545;
  short s = 10;

  // print value and size of each variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
 printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
 printf("float f value: %f and size: %d bytes\n", f, sizeof(f));
 printf("char q value: %c and size: %d bytes\n", c, sizeof(c));
 printf("unsigned int u value: %d and size: %d bytes\n", u, sizeof(u));
 printf("short s value: %d and size: %d bytes\n", s, sizeof(s));

}

