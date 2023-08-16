# include <stdio.h>

int main ()
{
	char c;
	float num1;
	float num2;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands : ");
	fflush(stdout);
	scanf("%f",&num1);
	scanf("%f",&num2);

	switch(c)
	{
	case '+' :
		printf(" %g %c %g = %g",num1,c,num2,num1+num2);
		break;
	case '-' :
		printf(" %g %c %g = %g",num1,c,num2,num1-num2);
		break;
	case '*':
		printf(" %g %c %g = %g",num1,c,num2,num1*num2);
		break;
	case '/':
		printf(" %g %c %g = %g",num1,c,num2,num1/num2);
		break;

	}
	return 0;
}

