#include<stdio.h>

int arraySum(){
	int r,c;
	
	printf("Enter the size of rows :- ");
	scanf("%d",&r);
	printf("Enter the size of columns :- ");
	scanf("%d",&c);
	
	int arr[r][c];
	int i,j;
	
	printf("\n\n");
	for(i=0 ; i<r ; i++){
		for(j=0 ; j<c ; j++){
			printf("Enter Array[%d][%d] :- ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Your Array is :- \n");
	for(i=0 ; i<r ; i++){
		for(j=0 ; j<c ; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	int sum=0;
	for(i=0 ; i<r ; i++){
		for(j=0 ; j<c ; j++){
			sum += arr[i][j];
		}
	}
	return sum;
}

void main(){
	int sum;
	
	sum = arraySum();
	printf("Your sum of array is :- %d",sum);
}
