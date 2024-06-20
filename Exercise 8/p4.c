//Write a Program to print odd numbers from N to 1 using a do while loop.

#include<stdio.h>

main(){
	int i,j;
	
	printf("Enter the first number: ");
	scanf("%d",&i);
	printf("Enter the second number: ");
	scanf("%d",&j);
	
	do{
		printf("%d\n",j);
		j--;
	}while(j>=i);
}

