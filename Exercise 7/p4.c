//Q.4 Write a Program to print odd numbers from N to 1 using a while loop.

#include<stdio.h>

main(){
	int n,m=1;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	while(n>=m){
		printf("%d\n",n);
		n--;
	}
}
