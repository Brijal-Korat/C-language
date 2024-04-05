#include<stdio.h>

main(){
	int a,b,c;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	printf("Enter teh value of C: ");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("A is max..!")
			   :printf("C is max..!")
		 :(b>c)?printf("B is max..!")
		 	   :printf("C is max..!");
		
}
