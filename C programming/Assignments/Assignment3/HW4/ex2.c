#include <stdio.h>

int factorial(int n);

int main()
{
	int num;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d: " , num);
	int res=factorial(num);
	printf("%d " , res);

	return 0 ;
}

int factorial(int n)
{
	if(n==1) return 1;
return n * factorial(n-1);
}
