# include <stdio.h>

int main ()
{
	int num;
	printf("Enter an integer :");
	fflush(stdout);
	scanf("%d",&num);
	int fac=1;
	if(num <0)
		printf("Error!!! Factorial of negative integer does not exit");
	else if ( num== 0)
	{
		fac=1;
		printf("Factorial = %d",fac);

	}
	else
	{
		int i;
		for(i=1;i<num+1;i++)
		{
			fac*=i;
		}
		printf("Factorial = %d",fac);

	}
	return 0;
}

