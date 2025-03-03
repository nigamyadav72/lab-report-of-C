#include<stdio.h>
#include<stdlib.h>
int data;
struct employee
{
	int empno;
	char name[30];
	float salary;

};
void input(struct employee e[])
{
	printf("Enter empno,name,salary");
	scanf("%d%s%f",&e[data].empno,&e[data].name,&e[data].salary);
	data++;
	printf("Record Added successfully\n");
}
void display(struct employee e[])
{
	int i;
	if(data==0)
	printf("NO records found\n");
	else 
	{

	
	printf("The records are:\n");
	for(i=0;i<data;i++)
		{
			printf("%d\n%s\t%f\n",e[i].empno,e[i].name,e[i].salary);
		}
	}
}
void update(struct employee e[])
{
	int i,tempno;
	printf("Enter employee number where salary is to be increased");
	scanf("%d",&tempno);
	for(i=0;i<data;i++)
	{
		if(e[i].empno==tempno)
		{
			e[i].salary=e[i].salary+0.1*e[i].salary;
			printf("salary updated\n");
			break;
		}
	}
	if(data==i)
	printf("%d record not found",tempno);
	
}
int main()
{
	struct employee e[100];
	int choice;
	while(1)
	{
		system("cls");
		printf("Employee management system\n");
		printf("1.Add Employee\n");
		printf("2.Display Employee\n");
		printf("3.Update Employee\n");
		printf("4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:input(e);
				
				break;
			case 2:display(e);
					
					break;
			case 3:update(e);
					
					break;		
			case 4:exit(0);
			default:printf("Invalid choice");

		}


	}
	return 0;
}