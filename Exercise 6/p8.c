#include<stdio.h>

void main()
{
	int choice,choices;

	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
	printf("*=*=       Family restuarent   *=*=\n");
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
	printf("\n \n \n \n");


	printf("Press 1 for order Pizza...\n");
	printf("Press 2 for order Burger...\n");
	printf("Press 3 for order Fries...\n");
	printf("Press 4 for order Brownie...\n");
	



	printf("Enter your choice :- ");
	scanf("%d\n\n",&choice);

	switch (choice)
	{
		case 1:
			printf("Press 1 for Cheezey Pizza..!\n");
			printf("Press 2 for Margerito Pizza..!\n");
			printf("Press 3 for 9 Cheezey Pizza..!\n");
			
			printf("Enter Your Choice: ");
			scanf("%d\n\n",&choices);
			
			switch(choices){
				case 1:
					printf("Wait for few minutes..!");
					break;
				
				case 2:
					printf("Its take time sir or mam..!");
					break;
					
				case 3:
					printf("You have to wait sir or mam for few times..!");
					break;
			
				default:
					printf("...Not Available Here...");
					break;
			}
			break;

		case 2:
			printf("Press 1 for Cheezey Burger..!\n");
			printf("Press 2 for Double Petty Burger..!\n");
			printf("Press 3 for Sezwan Chuteney Burger..!\n");
			
			printf("Enter Your Choice: ");
			scanf("%d\n\n",&choices);
			
			switch(choices){
				case 1:
					printf("Wait for few minutes..!");
					break;
				
				case 2:
					printf("Its take time sir or mam..!");
					break;
					
				case 3:
					printf("You have to wait sir or mam for few times..!");
					break;
			
				default:
					printf("...Not Available Here...");
					break;
			}
			break;

		case 3:
			printf("Press 1 for Normal Fries..!\n");
			printf("Press 2 for Chezzey Fries..!\n");
			printf("Press 3 for Mozerella Loaded Fries..!\n");
			
			printf("Enter Your Choice: ");
			scanf("%d\n\n",&choices);
			
			switch(choices){
				case 1:
					printf("Wait for few minutes..!");
					break;
				
				case 2:
					printf("Its take time sir or mam..!");
					break;
					
				case 3:
					printf("You have to wait sir or mam for few times..!");
					break;
			
				default:
					printf("...Not Available Here...");
					break;
			}
			break;

		case 4:
			printf("Press 1 for Brownie Ice-cream..!\n");
			printf("Press 2 for Sezzler Brownie..!\n");
			printf("Press 3 for Chocolate Loaded Brownie..!\n");
			
			printf("Enter Your Choice: ");
			scanf("%d\n\n",&choices);
			
			switch(choices){
				case 1:
					printf("Wait for few minutes..!");
					break;
				
				case 2:
					printf("Its take time sir or mam..!");
					break;
					
				case 3:
					printf("You have to wait sir or mam for few times..!");
					break;
			
				default:
					printf("...Not Available Here...");
					break;
			}
			break;

		default:
			printf("...Invalid...");
			break;
	}
}
