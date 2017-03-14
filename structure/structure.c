#include <stdio.h>

void main()
{
	struct date
	{
		int year;
		char month[10];
		char day[15];
	};

	struct book
	{
		char name[30];
		char suthor[30];
		char publication[100];
		int price;
	};

	struct employee
	{
		char name[30];
		char department[30];
		char shiift[30];
		int working_hour;
	};

	struct account
	{
		char type[30];
		char name[30];
		int create_time;
		float balance;
	};

	struct department_store
	{
		int product_id;
		char product_name;
		char product_category;
		int sales;
	};
}