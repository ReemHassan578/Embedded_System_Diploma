#include <stdio.h>
int main()
{ int arr[100];
int freq[100]={0};
int size;
/* enter size of input array */
scanf("%d",&size);
int i;
/* loop for insert values */
for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
	freq[arr[i]]++;
}
/* loop for find unique value */
for(i=0;i<size;i++)
{
	if(freq[i]==1)
	{
		printf("%d",i);
		break;
	}
}
return 0;
}
