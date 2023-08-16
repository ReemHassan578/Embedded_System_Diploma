# include <stdio.h>

int main ()
{
	float num1;
	float num2;
	float tem;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&num1);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&num2);

	tem=num1;
	num1=num2;
	num2=tem;

	printf("After swapping, value of a=%g\n",num1);
	printf("After swapping, value of b=%g",num2);

	return 0;
}
