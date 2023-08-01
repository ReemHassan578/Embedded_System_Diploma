#include <stdio.h>
#include <string.h>

int main(){
	char arr[100];
	int count=0;
	printf("Enter the string :");
	fflush(stdout);
	gets(arr);

	int i=0;
	while(arr[i]!=0)
	{
		count++;
		i++;
	}
	printf("length of string :%d",count);


	return 0 ;
}
