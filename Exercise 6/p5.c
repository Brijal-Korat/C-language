#include<stdio.h>

main(){
	int choice;
	
	printf("Press the number between 1 to 12 to find MONTHS of YEAR..!\n\n");
	
	printf("Enter Your Choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("1 for JANUARY..!");
			break;
			
		case 2:
			printf("2 for FEBRUARY..!");
			break;
			
		case 3:
			printf("3 for MARCH..!");
			break;
			
		case 4:
			printf("4 for APRIL..!");
			break;
			
		case 5:
			printf("5 for MAY..!");
			break;
			
		case 6:
			printf("6 for JUNE..!");
			break;
			
		case 7:
			printf("7 for JULY..!");
			break;
			
		case 8:
			printf("8 for AUGUST..!");
			break;
			
		case 9:
			printf("9 for SEPTEMBER..!");
			break;
			
		case 10:
			printf("10 for OCTOBER..!");
			break;
			
		case 11:
			printf("11 for NOVEMBER..!");
			break;
			
		case 12:
			printf("12 for DECEMBER..!");
			break;
			
		default:
			printf("Please enter the valid value..!!!");
			break;
	}
}
