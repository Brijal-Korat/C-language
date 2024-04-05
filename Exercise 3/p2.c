#include<stdio.h>

main(){
	int num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("The number you have entered is EVEN..!");
	}
	else{
		printf("The number you have entered is ODD..!");
	}
}
