#include "stdio.h"
#include "string.h"


int main() {
char arr[20];
	printf("Input a string: " );
	fflush(stdout);
	scanf("%s",arr);
	int y= strlen(arr);
	char * ptr=&arr[y-1];
	printf("Reverse of the string is : \n");
	while(y!=0)
	{
		printf("%c",*ptr);
		y--;
		ptr--;
	}



	return 0;
}
