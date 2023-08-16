#include <stdio.h>

int clear(int num,int pos)
{
	num&=~(1<<pos);
	return num;

}
int main()
{
	int num, pos;
	scanf("%d %d",&num,&pos);
	printf("%d",clear(num,pos));
	return 0;
}
