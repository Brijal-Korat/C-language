#include<stdio.h>

main(){
	int angle_1,angle_2,angle_3;
	
	printf("Enter the Value of Angle_1 : ");
	scanf("%d",&angle_1);
	printf("Enter the Value of Abngle_2 : ");
	scanf("%d",&angle_2);
	
	angle_3 = 180 - (angle_1 + angle_2);
	printf("The Valu Of Third Angle is : %d",angle_3);
}
