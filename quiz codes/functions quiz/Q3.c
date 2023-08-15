#include <stdio.h>
#include <string.h>

void reverse(int arr[],int n)
{
	int i;
	for(i=0;i<n/2;i++)
	{
		int tem=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=tem;
	}
}
int main()
{
	int arr[100];
	int size;
	scanf("%d",&size);
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse(arr,size);
	for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
	return 0;
}
