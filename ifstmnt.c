#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  int b = 3;
  if(a == b){
    printf("a is equal to b\n");
  }
  if(a != b){
    printf("a is not equal to b\n");
  }
  if(a > b){
    printf("a is greater than b\n");
  }else{
    printf("a is not greater than b\n");
  }
  if(b >= a){
    printf("b is greater than or equal to a\n");
  }else{
    printf("b is not greater than or equal to a\n");
  }
  if(a == 0 && b == 0){
    printf("a and b are both 0\n");
  }
  if(a == 0 || b == 0){
    printf("a is 0 or b is 0\n");
  }
  if( !(b == 0) ){
    printf("b is not zero\n");
  }

}
