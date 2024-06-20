#include<stdio.h>

main(){
	int num;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	
	(num%2==0)?printf("The number %d is even..!",num)
			  :printf("The number %d is odd..!");
}
