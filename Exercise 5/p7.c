//% variables with ternary operators

#include<stdio.h>

main(){
	int a,b,c,d,e;
	
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	printf("Enter the value of C: ");
	scanf("%d",&c);
	printf("Enter the value of D: ");
	scanf("%d",&d);
	printf("Enter the value of E: ");
	scanf("%d",&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is max..!")
						   :printf("E is max..!")
					 :(d>e)?printf("D is max..!")
					 	   :printf("E is max..!")
			   :(c>d)?(c>e)?printf("C is max..!")
			   			   :printf("E is max..!")
			   		 :(d>e)?printf("D is max..!")
					 	   :printf("E is max..!")
		 :(b>c)?(b>d)?(b>e)?printf("B is max..!")
		 				   :printf("E is max..!")
		 			 :(d>e)?printf("D is max..!")
					 	   :printf("E is max..!")
		 	   :(c>d)?(c>e)?printf("C is max..!")
			   			   :printf("E is max..!")
			   		 :(d>e)?printf("D is max..!")
						   :printf("E is max..!");
}
