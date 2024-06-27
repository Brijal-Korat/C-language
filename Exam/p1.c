#include<stdio.h>

main(){
	int n1,n2;
	
	printf("Enter first number :- ");
	scanf("%d",&n1);
	printf("Enter second number :- ");
	scanf("%d",&n2);
	
	printf("\n\nPress 1 for Addition..!");
	printf("\nPress 2 for Substraction..!");
	printf("\nPress 3 for Multiplication..!");
	printf("\nPress 4 for Division..!");
	
	int choice;
	printf("\n\nEnter your choice :- ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Addition of %d and %d is :- %d",n1,n2,n1+n2);
			break;
			
		case 2:
			printf("Substraction of %d and %d is :- %d",n1,n2,n1-n2);
			break;
			
		case 3:
			printf("Multiplication of %d and %d is :- %d",n1,n2,n1*n2);
			break;
			
		case 4:
			printf("Division of %d and %d is :- %d",n1,n2,n1/n2);
			break;
			
		default:
			printf("Please enter valid choice between 1 to 5..!!");
	}
}
