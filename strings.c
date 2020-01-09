#include <stdio.h>
#include <string.h>

int main(){
	char str1[27];
	char c = 'a';
	for(int i = 0; i < 26; i++){
		str1[i] = c;
		c++;
	}
	str1[26] = '\0';
	char str2[27] = "abcdefghijklmnopqrstuvwxyz";
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str1 and str2 are ");
	if(strcmp(str1,str2) != 0){
		printf("not ");
	}
	printf("identical.\n");
	for(int i = 0; i<26; i++){
		str2[i] += -32;
	}
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str1 and str2 are ");
	if(strcmp(str1,str2) != 0){
		printf("not ");
	}
	printf("identical.\n");
	char str3[100];
	strcpy(str3, str1);
	strcat(str3, str2);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
}
