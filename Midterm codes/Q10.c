#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int pre=0;
	int tem=0;
	int count=0;
	while(num>0)
	{
		if((num & 1)== 1 && pre==0)
		{
			pre=1;
			count++;
		}
		else if ((num & 1)== 1 && pre==1)
			count++;
		else if((num & 1)== 0)
		{
			tem=tem<count ? count : tem ;
			count=0;
			pre=0;
		}
		num>>=1;
	}
	tem=tem<count ? count : tem ;
	printf("%d",tem);
	return 0;
}
