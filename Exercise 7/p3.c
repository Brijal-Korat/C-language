//Q.3 Write a Program to print 1 to N using a while loop.

#include<stdio.h>

main(){
	int n,m=1;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	while(m<=n){
		printf("%d\n",m);
		m++;
	}
}
