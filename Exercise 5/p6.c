#include<stdio.h>

main(){
	int a,b,c,d;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	printf("Enter the value of C: ");
	scanf("%d",&c);
	printf("Enter the value of D: ");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf("A is max..!")
					 :printf("D is max..!")
			   :(c>d)?printf("C is max..!")
			   		 :printf("D is max..!")
		 :(b>c)?(b>d)?printf("B is max..!")
		 			 :printf("D is max..!")
		 	   :(c>d)?printf("C is max..!")
			   		 :printf("D is max..!");
}
