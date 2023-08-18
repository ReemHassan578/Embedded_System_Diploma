# include <stdio.h>

struct Sdis{
	int feet;
	float inch;
};

int main()
{

	struct Sdis d1,d2;
	printf("Enter information of 1st distance:\n");
	printf("Enter feet:");
	fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%f",&d1.inch);
	printf("\n");
	printf("Enter information of 2nd distance\n");
	printf("Enter feet:");
	fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%f",&d2.inch);
	int sumfeet=d1.feet+d2.feet;
	float suminch=d1.inch+d2.inch;
	if(suminch>12) {
		sumfeet++;
		suminch-=12;
	}

	printf("Sum of distances=%d'-%.1f",sumfeet,suminch);
	return 0;
}

