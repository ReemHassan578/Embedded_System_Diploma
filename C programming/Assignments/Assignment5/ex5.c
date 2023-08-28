#include "stdio.h"
#include "string.h"

struct Semployee{
	char name[10];
	int id;
};

int main() {
	struct Semployee *(*arr)[2] ;
	struct Semployee * (s[2]);
	struct Semployee st1={"Alex",1002},st2={"Reem",1005};
	s[0]=&st1;
	s[1]=&st2;
	arr=&s;
	printf("Employee Name : %s \n",(*(*arr))-> name);
	printf("Employee ID : %d \n",(*(*arr))-> id);


	return 0;
}
