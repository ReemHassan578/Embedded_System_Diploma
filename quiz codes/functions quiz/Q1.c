#include <stdio.h>
#include <string.h>
/*
return 0 if equal
return -1 if not
*/
int check(char arr[],int size1, char ch[],int size2)
{
	if(size1!=size2) return -1;

	else
	{
		int i=0;
		while(size1)
		{
			if(arr[i]==ch[i])
			{
				size1--;i++; continue;
			}
			else
			{
				return -1;
			}
		}
		return 0;
	}
}
int main()
{
	char username[100];
	gets(username);
	char name[100];
	gets(name);
	int result=check(name,strlen(name),username,strlen(username));
	if(result)
		printf("Not the same");
	else
		printf("The same");

	return 0;
}