#include <stdio.h>
int main(){
	int arr[100];
	int n;
	int i,element,loc=-1;
	printf("Enter no of elements :");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be searched :");
	fflush(stdout);
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(arr[i]==element) {loc=i+1 ; break;}
	}

		printf("Number found at the location = %d ",loc);


	return 0 ;
}

