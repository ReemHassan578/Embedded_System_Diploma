#include "stdio.h"


int main() {
char c='A';
	char *pt=&c;
	printf("The Alphabets are : \n" );
	while(*pt<='Z')
	{
		printf("%c  ",*pt);
		++*(pt);
	}

	return 0;
}
