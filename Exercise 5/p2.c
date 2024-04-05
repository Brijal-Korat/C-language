#include<stdio.h>

main(){
	int choice;
	
	printf("Press 1 for 1st_week..!\n");
	printf("Press 2 for 2nd_week..!\n");
	printf("Press 3 for 3rd_week..!\n");
	printf("Press 4 for 4th_week..!\n");
	
	printf("\n\n");
	
	printf("Enter Youe Choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nYeayyyy, This is the first week..!");
			break;
			
		case 2:
			printf("\nYeayyyy, This is the second week..!");
			break;
			
		case 3:
			printf("\nYeayyyy, This is the third week..!");
			break;
			
		case 4:
			printf("\nYeayyyy, This is the forth or last week..!");
			break;
			
		default:
			printf("\nPlease enter the valid value..!");	
	}
}
