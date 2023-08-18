# include <stdio.h>

struct Sstudent{
	char name[50];
	int roll;
	float marks;
};

int main()
{
	struct Sstudent s[10];
	printf("Enter information of student:\n");
	printf("\n");
	int i;
	for(i=0;i<10;i++)
	{
		printf("For roll number:");
		fflush(stdout);
		scanf("%d",&s[i].roll);
		printf("Enter name:");
		fflush(stdout);
		scanf("%s",s[i].name);
		printf("Enter marks:");
		fflush(stdout);
		scanf("%f",&s[i].marks);
		printf("\n");
	}
	printf("\n");
	printf("Displaying Information\n");
	for(i=0;i<10;i++)
	{
		printf("name: %s\n",s[i].name);
		printf("Roll: %d\n",s[i].roll);
		printf("Marks: %.2f\n",s[i].marks);
	}
	return 0;
}




