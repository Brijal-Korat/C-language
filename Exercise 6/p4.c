#include<stdio.h>

main(){
	int choice;
	
	printf("Press the number between 1 to 7 to find days of week..!\n\n");
	
	printf("Enter Your Choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("1 for MONDAY..!");
			break;
			
		case 2:
			printf("2 for TUESDAY..!");
			break;
			
		case 3:
			printf("3 for WEDNESDAY..!");
			break;
			
		case 4:
			printf("4 for THURSDAY..!");
			break;
			
		case 5:
			printf("5 for FRIDAY..!");
			break;
			
		case 6:
			printf("6 for SATURDAY..!");
			break;
			
		case 7:
			printf("7 for SUNDAY..!");
			break;
			
		default:
			printf("Please enter the valid value..!!!");
			break;
	}
}
