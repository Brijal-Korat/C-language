//Write a Program to convert the given name in string and sum the number of string assci value.

#include<stdio.h>

main(){
	
	char str[]= "Hello world";
	int length = strlen(str);
	
	printf("%s ",str);
	printf("\nlength of string is %d ",length);
	
	int i;
	printf("\n\nASCII value of :\n");
	for(i=0; i<length; i++){
		printf("\n%c = %d ",str[i],str[i]);
	}
	
}
