#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	scanf("%d",&num);
	int count=0;
	while(num!=0)
	{
		if((num & 1)== 1)
			count++;
		num>>=1;

	}
	printf("%d",count);
	return 0;
}
