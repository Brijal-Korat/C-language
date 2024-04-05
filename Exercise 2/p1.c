/*

Input:
The temperature in Celcius: 38

Output: 
The temperature in Fahrenheit: 100.4

*/

#include<stdio.h>

main(){
	int c;
	float f;
	
	printf("Enter The Value of Degree Celcius : ");
	scanf("%d",&c);
	
	f = ( c * 9/5 ) + 32;
	printf("The value of Ferenhit : %.2f",f);
}
