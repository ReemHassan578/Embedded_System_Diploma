# include <stdio.h>

int main ()
{
	float number1;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&number1);
	if(number1==0)
		printf("you entered zero.");
	else if (number1<0)
		printf("%.2f is negative.",number1);
	else
		printf("%.2f is positive.",number1);

	return 0;
}
