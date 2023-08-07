#include <stdio.h>

int power(int n ,int po);

int main()
{
	int num,poN;
	printf("Enter base number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Enter power number(positive integer) : ");
	fflush(stdout);
	scanf("%d",&poN);
	printf("%d^%d = " , num,poN);
	int res=power(num,poN);
	printf("%d " , res);

	return 0 ;
}

int power(int n , int po)
{
	if(po==1) return n;
	return n * power(n,po-1);
}
