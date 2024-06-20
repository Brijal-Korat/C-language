/*
Find the size of data_type.
*/

#include<stdio.h>

main(){
	
	int a;
	float b;
	
	printf("\aSize of Integer : %zu\n",sizeof(a));  // "\a" for bell sound
	printf("Size of Float : %zu\n",sizeof(b));
	printf("Size of Double : %d\n",sizeof(double));
	printf("Size of Character : %lu\n",sizeof(char));
	printf("Size of Long Long Integer : %zu\n",sizeof(long long int));
	printf("Size of Long Long Long Integer : %lu\n",sizeof(long long int));
	
	int array[10];
	
	printf("Size of Array : %zu\n",sizeof(array));
	
	int size = sizeof(array) / sizeof(array[0]);
	printf("Size of array : %d",size);
}
