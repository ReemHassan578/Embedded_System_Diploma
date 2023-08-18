# include <stdio.h>

#define area(r) 3.14159*r*r
int main()
{
	int r;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%d",&r);
	printf("Area=%.2f ",area(r));
	return 0;
}

