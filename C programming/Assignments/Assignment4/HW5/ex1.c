# include <stdio.h>

struct Sstudent{
 char name[50];
int roll;
float marks;
};

int main()
{
	struct Sstudent s;
	printf("Enter information of student:\n");
	printf("\n");
	printf("Enter name:");
	fflush(stdout);
	scanf("%s",s.name);
	printf("Enter roll number:");
	fflush(stdout);
	scanf("%d",&s.roll);
	printf("Enter marks:");
	fflush(stdout);
	scanf("%f",&s.marks);
	printf("\n");
	printf("Displaying Information\n");
	printf("name: %s\n",s.name);
	printf("Roll: %d\n",s.roll);
	printf("Marks: %.2f\n",s.marks);
	return 0;
}

