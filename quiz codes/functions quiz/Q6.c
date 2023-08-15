#include <stdio.h>
int fun(int num)
	{
		num>>=3;
		return num%2;
	}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",fun(num));
	return 0;
}
