// Write a Program to print leap years between two given numbers using a while loop.

#include<stdio.h>

main(){
	int startyear,endyear;
	
	printf("Enter the start year: ");
	scanf("%d",&startyear);
	printf("Enter the end year: ");
	scanf("%d",&endyear);
	
	while(startyear<=endyear){
		if(startyear%4==0){
			printf("%d\n",startyear);
		}
		startyear++;
	}
}
