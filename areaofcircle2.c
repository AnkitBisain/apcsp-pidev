#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float areaOfCircle(float d){
  return 3.14*d*d;
}
int checkArr(char* c[]){

}

int main(int argc, char* argv[])
{
  char* c[2];
  float d[2];
  if(argc < 3){
    c[0] = "0";
    c[1] = "0";
  }else{
    c[0] = argv[1];
    c[1] = argv[2];
  }
  d[0] = atof(c[0]);
  d[1] = atof(c[1]);
  char input[256];
  float var1;
  float var2;
  while(d[0] == 0 || d[1] == 0  || d[0] > d[1]){
	printf("Please enter two positive real numbers, seperated by a space, where the second is larger than the first.\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f %f", &var1, &var2);
	d[0] = var1;
	d[1] = var2;
  }
  for(float f = d[0]; f <= d[1]; f++){
    printf("If radius is %f, area is %f\n",f,areaOfCircle(f));
  }
}
