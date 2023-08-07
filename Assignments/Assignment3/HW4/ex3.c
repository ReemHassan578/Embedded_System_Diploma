#include <stdio.h>
#include <string.h>
void reverse(char ar[],int start,int end);

int main()
{
	char arr[100];
	printf("Enter a sentence : ");
	fflush(stdout);
	gets(arr);
	int end=strlen(arr);
	reverse(arr,0,end-1);
	printf("%s",arr);

	return 0 ;
}

void reverse(char ar[],int start,int end)
{
	if(start==end) return ;
	char tem=ar[start];
	ar[start]=ar[end];
	ar[end]=tem;
	reverse(ar,start+1,end-1);
}
