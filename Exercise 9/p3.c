//Write a Program to print 1 to N using a for loop.

#include<stdio.h>

main(){
	int i,j;
	
	printf("Enter the first number: ");
	scanf("%d",&i);
	printf("Enter the second number: ");
	scanf("%d",&j);
	
	for(i=1;i<=j;i++){
		printf("%d\n",i);	
	}
}

