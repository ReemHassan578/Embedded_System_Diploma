# include <stdio.h>

int main ()
{
	int num;
	printf("Enter an integer :");
	fflush(stdout);
	scanf("%d",&num);
	int i;
	int sum=0;
	for(i=1;i<num+1;i++)
	{sum+= i;
	}
	printf("Sum = %d" , sum);

	return 0;
}
