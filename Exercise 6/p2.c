#include<stdio.h>

main(){
	int units , total_bill = 0;
	float bills;
	
	printf("Enter the units: ");
	scanf("%d",&units);
	
	if(units<=50){
		bills=units*0.50;
	}
	else if(units<=100){
		bills=units*0.75;
	}
	else if(units<=250){
		bills=units*1.50;
	}
	else{
		bills= 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
	}
	
	total_bill = bills * 0.20;
    bills += total_bill;
    
    printf("Total electricity bill: %f\n", bills);
}
