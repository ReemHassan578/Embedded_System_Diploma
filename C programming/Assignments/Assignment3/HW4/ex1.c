#include <stdio.h>

int isPrime(int a,int b , int arr[]);

int main()
{
	int arr[100];
	int num1,num2;
	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("Prime numbers between %d and %d are : " , num1 ,num2);
	int n=isPrime(num1,num2,arr);
	int r;
	for( r=0;r<n;r++)
	{ printf("%d ",arr[r]);

	}
	return 0 ;
}

int isPrime(int a,int b , int arr[])
{
	int n=0;
	int i;
	for( i=a+1;i<b;i++)
	{
		int j;
		for( j=2;j*j<i;j++)
		{
			if(i%j==0) break;

		}
		if(j*j>i)
		{
			arr[n]=i;
			n++;
		}
	}
	return n;
}
