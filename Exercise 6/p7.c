#include<stdio.h>

main(){
	int num,choice;
	
	printf("Press 1 for English..!\n");
	printf("Press 2 for Hindi..!\n");
	printf("Press 3 for Gujaarti..!\n");
	
	printf("Enter your choice: ");
	scanf("%d",&num);
	
	switch(num){
		case 1:
			printf("Press 1 for Top-up Recharge..!\n");
			printf("Press 2 for Internet Recharge..!\n");
			printf("Press 3 for Special Recharge..!\n");
			
			printf("Enter Your Choice You want: ");
			scanf("%d",&choice);
			
			switch(choice){
				case 1:
					printf("You have successfully done Top-up Recharge.\n");
					break;
					
				case 2:
					printf("You have successfully done Internet Recharge.\n");
					break;
					
				case 3:
					printf("You have successfully done Special Recharge.\n");
					break;
					
				default:
					printf("Please enter valid value..!\n");
					break;
			}
			break;
		
		case 2:
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");
						
			printf("Enter Your Choice You want: ");
			scanf("%d",&choice);
			
			switch(choice){
				case 1:
					printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
					break;
					
				case 2:
					printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
					break;
					
				case 3:
					printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
					break;
					
				default:
					printf("kripya karke valid value enter kijie..!\n");
					break;
			}
			break;
				
		case 3:
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");
						
			printf("Enter Your Choice You want: ");
			scanf("%d",&choice);
			
			switch(choice){
				case 1:
					printf("Tame  Internet Recharge safalta purvak kari lidhu chhe.\n");
					break;
					
				case 2:
					printf("Tame  Top-Up Recharge safalta purvak kari lidhu chhe.\n");
					break;
					
				case 3:
					printf("Tame  Special Recharge safalta purvak kari lidhu chhe.\n");
					break;
					
				default:
					printf("Krupa kaari ne valid value enter karo.\n");
					break;
			}
			break;
			
		default:
			printf("Please enter valid value..!\n");
			break;		
			
	}
}
