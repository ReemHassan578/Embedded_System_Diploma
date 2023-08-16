#include <stdio.h>
int main(){
	int arr[100][100];
	int row,col;
	int i,j;
	printf("Enter rows and columns of matrix:");
	fflush(stdout);
	scanf("%d",&row);
	scanf("%d",&col);
	printf("Enter elements of matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&arr[i][j]);
		}

	}
	printf("Entered Matrix:\n ");

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d\t",arr[i][j]);

		}
		printf(" \n");
	}

	printf("Transpose of Matrix: \n");

	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf(" %d\t",arr[j][i]);

		}
		printf(" \n");
	}

	return 0 ;
}

