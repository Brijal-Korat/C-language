#include<stdio.h>

main(){
	int a,b,choice;
	
	printf("Enter the number of Mathemetical_Operations..\n\n");
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("ENter the value of B: ");
	scanf("%d",&b);
	
	printf("\n\n");
	
	printf("Press 1 for Addition..\n");
	printf("Press 2 for Substraction..\n");
	printf("Press 3 for Multiplication..\n");
	printf("Press 4 for Division..\n");
	printf("Press 5 for Modulo..\n");
	
	printf("Enter the your chioce: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nThe Addition of %d + %d is %d.",a,b,a+b);
			break;
			
		case 2:
			printf("\nThe Substraction of %d - %d is %d.",a,b,a-b);
			break;
			
		case 3:
			printf("\nThe Multiplication of %d * %d is %d.",a,b,a*b);
			break;
			
		case 4:
			printf("\nThe Division of %d / %d is %d.",a,b,a/b);
			break;
		
		case 5:
			printf("\nThe Modulo of %d and %d is %d.",a,b,a%b);
			break;
					
		default:
			printf("\nEnter the valid value..!");
			break;
	}
	
}
