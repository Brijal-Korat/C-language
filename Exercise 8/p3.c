//Write a Program to print 1 to N using a do while loop.

#include<stdio.h>

main(){
	int i,j;
	
	printf("Enter the first number: ");
	scanf("%d",&i);
	printf("Enter the second number: ");
	scanf("%d",&j);
	
	do{
		printf("%d\n",i);
		i++;
	}while(i<=j);
}

