#include <stdio.h>
int main(){
	int arr[100];
	int n;
	int i,element,loc;
	printf("Enter no of elements :");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be inserted :");
	fflush(stdout);
	scanf("%d",&element);
	printf("Enter the location :");
	fflush(stdout);
	scanf("%d",&loc);
	for(i=n-1;i>loc-2;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[loc-1]=element;

	for(i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0 ;
}

