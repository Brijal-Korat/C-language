#include<stdio.h>

main(){
	int r;
	
	printf("Enter the size of rows :- ");
	scanf("%d",&r);
	
	int arr[r];
	int i;
	
	printf("\n");
	for(i=0 ; i<r ; i++){
		printf("Enter Array[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nYour Array is :- \n");
	for(i=0 ; i<r ; i++){
		printf("%d ",arr[i]);
		printf("\n");
	}
	
	int *ptr;
	int cube=0;
	
	printf("\n\nConverted into cubes :- \n");
	for(i=0 ; i<r ; i++){
		ptr = &arr[i];
		cube = (*ptr) * (*ptr) * (*ptr); 
		printf("%d ",cube);
		printf("\n");
	}
	
}
