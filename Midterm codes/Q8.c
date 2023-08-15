#include <stdio.h>
int main()
{ int arr[100];
int size;
/* enter size of input array */
scanf("%d",&size);
int i;
/* loop for insert values */
for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
}
/* loop for reversing */
for(i=0;i<size/2;i++)
{
	int tem=arr[i];
	arr[i]=arr[size-1-i];
	arr[size-1-i]=tem;
}
/* loop for printing */

for(i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
return 0;
}
