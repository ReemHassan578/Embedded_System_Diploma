#include <stdio.h>
#include <string.h>

int main(){
	char arr[100];
	printf("Enter the string :");
	fflush(stdout);
	gets(arr);

	int i,j;
	for(i=0,j=strlen(arr)-1;i<strlen(arr)/2;i++,j--)
	{ if(i==j) break;
		char c=arr[i];
		arr[i]=arr[j];
		arr[j]=c;
	}
	printf("Reversed string is :%s",arr);


	return 0 ;
}

