#include<stdio.h>

main(){
	int a,b,c,d,e,f;
	
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
	printf("Enter the value of F: ");
	scanf("%d",&f);
	
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					if(a>f){
						printf("A is MAX..!");
					}	
					else{
						printf("F is MAX..!");
					}
				}
				else{
					if(e>f){
						printf("E is MAX..!");
					}	
					else{
						printf("F is MAX..!");
					}
				}
			}
			else{
				if(d>e){
					if(d>f){
						printf("D is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}	
				else{
					if(e>f){
						printf("E is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
			}
		}
		else{
			if(c>d){
				if(c>e){
					if(c>f){
						printf("C is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
				else{
					if(e>f){
						printf("E is MAX..!");
					}	
					else{
						printf("F is MAX..!");
					}
				}
			}
			else{
				if(d>e){
					if(d>f){
						printf("D is MAX..!");	
					}
					else{
						printf("F is MAX..!");
					}
				}
				else{
					if(e>f){
						printf("E is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				if(b>e){
					if(b>f){
						printf("B is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
				else{
					if(e>f){
						printf("E is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
			}
			else{
				if(d>e){
					if(d>f){
						printf("D is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
				else{
					if(e>f){
						printf("E is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
			}
		}	
		else{
			if(c>d){
				if(c>e){
					if(c>f){
						printf("C is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
				else{
					if(e>f){
						printf("E is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
			}
			else{
				if(d>e){
					if(d>f){
						printf("D is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}	
				else{
					if(e>f){
						printf("E is MAX..!");
					}
					else{
						printf("F is MAX..!");
					}
				}
			}
		}
	}
}
