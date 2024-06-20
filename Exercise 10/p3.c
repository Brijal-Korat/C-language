// Write a Program to find the sum of a first and the last digit of a number.

#include<stdio.h>

main(){	
	int n,first,last,sum;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	last=n%10;
	
	do{
		first=n%10;
		n=n/10;
	}while(n>0);
	
	printf("The first digit of number is: %d\n",first);
	printf("The last digit of number is: %d\n",last);
	
	printf("\n");
	printf("The sum of first digit %d and last digit %d is: %d", first, last, first+last);
}
