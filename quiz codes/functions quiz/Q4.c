#include <stdio.h>

int conv(char c)
{
	return c%10;

}
int main()
{
	char c;
	scanf("%c",&c);
	printf("%d",conv(c));
	return 0;
}
