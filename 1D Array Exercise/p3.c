/*
Write a Program to find square of each element from the given array.
For example,
Input:
Enter array size: 5

Enter array elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2


Output:
The squares are: 49, 16, 81, 25, 4
*/

#include<stdio.h>

main(){
	int a;
	
	printf("Enter the size of array: ");
	scanf("%d",&a);
	
	int arr[a],i,square;
	
	for(i=0;i<a;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n");
	printf("The all elements are:\n");
		
		
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n\n");
	printf("The squares are :- \n");
	for(i=0;i<a;i++){
		square=arr[i]*arr[i];
		printf("%d ",square);
	}
}
