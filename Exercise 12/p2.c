//WAP to print all even numbers between the array.

#include<stdio.h>

main(){
	int a;
	
	printf("Enter the size of array: ");
	scanf("%d",&a);
	
	int arr[a],i;
	
	for(i=0;i<a;i++){
		printf("arr[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nThe ALL elements are:- \n");
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n\nThe all EVEN numbers are:- \n");
	for(i=0;i<a;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
}
