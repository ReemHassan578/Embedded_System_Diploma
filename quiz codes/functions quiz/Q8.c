#include <stdio.h>
int last(int arr[],int size,int number )
{
	int index=-1;
	int i;
	for( i=0;i<size;i++)
	{
		if(arr[i]==number) index=i;

	}
	return index;

}
int main()
{
	int arr[100];
	int size,num;
	scanf("%d %d",&size,&num);
	int i;
	for( i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",last(arr,size,num) );

	return 0;
}
