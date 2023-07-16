# include <stdio.h>

int main ()
{
	char c;
	printf("Enter an alphabet: " );
	fflush(stdout);
	scanf("%c",&c);
	if(c == 'o' || c== 'a' || c=='e' || c=='u' || c=='i' || c == 'O' || c== 'A' || c=='E' || c=='U' || c=='I')
		printf("%c is a vowel.",c) ;
	else
		printf("%c is a consonant.",c) ;
	return 0;
}
