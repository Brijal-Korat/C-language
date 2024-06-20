/*
Write a Program to print the below pattern using nested for loop.
1   A   2   B   3
4   C   5   D   6
7   E   8   F   9
10   G   11   H   12
13   I   14   J   15
*/

#include<stdio.h>

main(){
	int i,j,n=1;
	char ch='A';
	
	for(i=1 ; i<=5 ; i++){
		for(j=1 ; j<=5 ; j++){
			if(j%2==0){
				printf("%c ",ch++);
			}
			else{
				printf("%d ",n++);
			}
		}
		printf("\n");
	}
}
