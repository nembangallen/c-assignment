#include <stdio.h>
#include <string.h>

struct student
{
	char name[30];
	char remarks[30];
	int roll;
	float marks;
};
void main()
{
	struct student st_record;

	printf("Enter name of Student: ");
	fgets(st_record.name, 30, stdin);
	printf("Enter student's remarks:");
	fgets(st_record.remarks, 30, stdin);
	printf("Enter student's roll no: ");
	scanf("%d",&st_record.roll);
	printf("Enter student's marks:");
	scanf("%f",&st_record.marks);

	printf(" Student's name: %s \n",st_record.name);
	printf(" Student's roll no. :%d \n",st_record.roll);
	printf(" Student's marks: %f \n",st_record.marks);
	printf(" Student's remarks: %s \n",st_record.remarks);
}