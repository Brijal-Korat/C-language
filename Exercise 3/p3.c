#include<stdio.h>

main(){
	int num;
	
	printf("Enter the value of Number : ");
	scanf("%d",&num);
	
	if(num<0){
		printf("The Number You have entered is NEGETIVE..!");
	}
	else if(num==0){
		printf("The Number You have entered is ZERO..!");
	}
	else{
		printf("The Number You have POSITIVE..!");
	}
}
