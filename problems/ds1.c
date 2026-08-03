#include<stdio.h>
#include<string.h>

struct employee {
	int id;
	char name[20];
	float salary;
};

int main(){
	struct employee e1;
	struct employee *ptr;
	ptr=&e1;


	e1.id = 1;
	strcpy(e1.name,"swaliya");
	e1.salary=20000;

	printf("employee id : %d\n",e1.id);
	printf("employee name: %s\n",e1.name);
	printf("employee salary: %.2f\n",e1.salary);

	printf("employee id : %d\n",ptr->id);
	printf("employee name: %s\n",ptr->name);
	printf("employee salary: %.2f\n",ptr->salary);

	printf("%lu",sizeof(e1));

	return 0;
}
