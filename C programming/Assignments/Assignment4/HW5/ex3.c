#include <stdio.h>

struct Snum{
	float real;
	float complex;
};

int main()
{

	struct Snum num1,num2;
	printf("For 1st complex number:\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&num1.real,&num1.complex);
	printf("For 2nd complex number:\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&num2.real,&num2.complex);
	printf("Sum:%.1f+%.1fi",num1.real+num2.real , num1.complex+num2.complex);
	return 0;
}

