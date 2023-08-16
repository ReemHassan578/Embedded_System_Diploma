#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	scanf("%s",s);
	int size=strlen(s);
	int i;
	for(i=0;i<size/2;i++)
	{
		char tem=s[i];
		s[i]=s[size-1-i];
		s[size-1-i]=tem;
	}
	printf("%s",s);
	return 0;
}
