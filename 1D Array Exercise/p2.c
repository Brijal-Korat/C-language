/*
Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Input:
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040
*/

#include<stdio.h>

main(){
	int a,b;
	
	printf("Enter the number of starting year: ");
	scanf("%d",&a);
	printf("Enter the number of ending year: ");
	scanf("%d",&b);
	
	int arr[a],i;
	
	arr[a]=a;
	
	for(i=arr[a];i<=b;i++){
		if(arr[a]%4==0){
			printf("%d\n",arr[a]);
		}
		arr[a]++;
	}
}
