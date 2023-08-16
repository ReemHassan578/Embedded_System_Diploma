# include <stdio.h>

int main ()
{
	float number1;
	float number2;
	float number3;
	float max;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f",&number1);
	scanf("%f",&number2);
	scanf("%f",&number3);
if(number1>=number2 && number1>=number3) max=number1;
else if (number2>=number1 && number2>=number3) max=number2;
else if (number3>=number1 && number3>=number1) max=number3;
printf("Largest number = %.2f" , max);

	return 0;
}
