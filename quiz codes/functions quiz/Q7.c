#include <stdio.h>
int pow3(int num)
{
	int b=3;
	while(b<num && b!=num )
	{
		b*=3;
	}
	if(b==num)
		return 0;
	else
		return 1;
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",pow3(num));
	return 0;
}
