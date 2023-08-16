#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	char tem1[100];
	char tem2[100];
	gets(arr);
	int i=0;
	while(arr[i]!=' ')
	{
		tem1[i]=arr[i];
		i++;
	}
	tem1[i]=0;
	i++;
	int j=0;
	while(arr[i]!='.')
	{
		tem2[j]=arr[i];
		i++;
		j++;
	}
	tem2[j]=0;
	strcat(tem2," ");
	strcat(tem1,".");
	strcat(tem2,tem1);
	printf("%s",tem2);

	return 0;
}
