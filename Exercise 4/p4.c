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
	
	if(a>b){
		if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						printf("A is MAX..!");
					}
					else{
						printf("E is MAX..!");
					}
				}
				else{
					if(d>e){
						printf("D is MAX..!");
					}	
					else{
						printf("E is MAX..!");
					}
				}
			}
			else{
				if(c>d){
					if(c>e){
						printf("C is MAX..!");
					}
					else{
						printf("E is MAX..!");
					}
				}	
				else{
					if(d>e){
						printf("D is MAX..!");
					}	
					else{
						printf("E is MAX..!");
					}
				}
			}
		}
		else{
			if(b>c){
				if(b>d){
					if(b>e){
						printf("B is MAX..!");
					}
					else{
						printf("E is MAX..!");
					}
				}
				else{
					if(d>e){
						printf("D is MAX..!");
					}
					else{
						printf("E is MAX..!");
					}
				}
			}
			else{
				if(c>d){
					if(c>e){
						printf("C is MAX..!");
					}
					else{
						printf("E is MAX..!");
					}
				}	
				else{
					if(d>e){
						printf("D is MAX..!");
					}	
					else{
						printf("E is MAX..!");
					}
				}
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				if(b>e){
					printf("B is MAX..!");
				}
				else{
					printf("E is MAX..!");
				}
			}
			else{
				if(d>e){
					printf("D is MAX..!");
				}
				else{
					printf("E is MAX..!");
				}
			}
		}	
	}
}
