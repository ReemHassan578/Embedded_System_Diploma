#include "stdio.h"


int main() {
	int arr[15];
	int size;
	printf("Input the number of elements to store in the array (max 15) : " );
	fflush(stdout);
	scanf("%d",&size);
	int * ptr=&arr[size-1];
	printf("Input %d number of elements in the array :\n ",size);
	int i;
	for(i=0;i<size;i++)
	{
		printf("element - %d : ",i+1 );
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("The elements of array in reverse order are :\n ");
	while(size>0)
	{
		printf("element - %d : %d\n",size,*ptr );
		ptr--;
		size--;
	}
	return 0;
}
