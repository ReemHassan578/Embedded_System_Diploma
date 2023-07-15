# include <stdio.h>

int main ()
{
	int number1;
	int number2;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d",&number1);
	scanf("%d",&number2);
	printf("Sum: %d",number1+number2);

	return 0;
}
