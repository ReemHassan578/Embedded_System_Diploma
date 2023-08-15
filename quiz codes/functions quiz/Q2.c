#include <stdio.h>

void sw(int a[],int sizea, int b[],int sizeb)
{
	int maxi=sizea<sizeb? sizeb:sizea;
	int i=0;
	while(maxi--)
	{
		int tem=a[i];
		a[i]=b[i];
		b[i]=tem;
		i++;
	}

}

int main()
{
	int arr1[20];
	int arr2[20];
	int sizea;
	int sizeb;
	int i;
	scanf("%d",&sizea);
	scanf("%d",&sizeb);

	for(i=0;i<sizea;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<sizeb;i++)
	{
		scanf("%d",&arr2[i]);
	}

	printf("first array\n");
	for(i=0;i<sizea;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n ");
	printf("second array\n");
	for(i=0;i<sizeb;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n ");
	sw(arr1,sizea,arr2,sizeb);
	printf("first array\n");
	for(i=0;i<sizeb;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n ");
	printf("second array\n");

	for(i=0;i<sizea;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n ");

	return 0;
}


