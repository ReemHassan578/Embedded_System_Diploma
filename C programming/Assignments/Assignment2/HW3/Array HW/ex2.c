int main(){
	float arr[100];
	int n;
	float sum=0;
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d. Enter number:",i+1);
		fflush(stdout);
		scanf("%f",&arr[i]);

	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];

	}

	printf("Average = %.2f",sum/n);

	return 0 ;
}



