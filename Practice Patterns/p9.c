#include<stdio.h>

main(){
	int i=1,j,a=10;
	
	for(; i<=5 ; i++){
		for(j=1 ; j<=i ; j++){
			printf("%d ",a);
			a+=10;
		}
		printf("\n");
	}
	
	printf("\n\nSquare elements :- \n");
	for(i=1 ; i<=5 ; i++){
		for(j=1 ; j<=i ; j++){
//			int ans=0;
//			ans = a*a;
//			printf("%d ",ans);
		}
		printf("\n");
	}
}
