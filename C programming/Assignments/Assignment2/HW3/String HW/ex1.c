#include <stdio.h>
#include <string.h>
int main(){
	char arr[100];
	char n;
	int count=0;
	printf("Enter a string :");
	fflush(stdout);
	gets(arr);
	printf("Enter a character to find frequency :");
	fflush(stdout);
	scanf("%c",&n);
	int i;
	for(i=0;i<strlen(arr);i++)
	{
		if(arr[i]==n) count++;
	}
	printf("Frequency of e =%d",count);


	return 0 ;
}

