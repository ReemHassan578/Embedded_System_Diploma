# include <stdio.h>

int main ()
{
	char c;
	char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','x'};
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);
	int i;
	for(i=0;i<26;i++)
	{
		if(c==arr[i])
		{
			printf(" %c is an alphabet",c);
			break;
		}
	}

	if(i==26)
		printf(" %c is not an alphabet",c);

	return 0;
}

