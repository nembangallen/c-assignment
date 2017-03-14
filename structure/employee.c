#include <stdio.h>
struct employee
{
	char name[30];
	char department[30];
	char shift[30];
	int working_hour;
};
int main()
{
	struct employee emp1,emp2,emp3,emp4;

	printf("Enter your name: ");
	fgets(emp1.name,30,stdin);
	printf("Enter department:");
	fgets(emp2.department,30,stdin);
	printf("Enter your shift:");
	fgets(emp3.shift,30,stdin);
	printf("Enter your working hour:");
	scanf("%d",&emp4.working_hour);

	printf("Your name: %s",emp1.name);
	printf("Your department: %s",emp2.department);
	printf("Your shift: %s",emp3.shift);
	printf("Your working hour %d",emp4.working_hour);

	return(0);
}