#include <stdio.h>
int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int isprime=0;
	int i,j;
	for(i=num1;i<=num2;i++)
	{
		if(i==1 || i==2)
		{
			printf("%d ",i);
			continue;
		}
		isprime=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
			else
				isprime=1;
		}
		if(isprime)
			printf("%d ",i);
	}
	return 0;
}