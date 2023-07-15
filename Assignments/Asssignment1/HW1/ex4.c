# include <stdio.h>

int main ()
{
	float number1;
	float number2;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%f",&number1);
	scanf("%f",&number2);
	printf("Sum: %f",number1*number2);

	return 0;
}
