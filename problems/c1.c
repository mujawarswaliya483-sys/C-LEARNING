#include<iostream>
#include<string.h>

struct student{
	
	int roll;
	char name[10];
	float marks;

};

int main(){
	struct student s;

	s.roll=101;
	strcpy(s.name,"swaliya");
	s.marks=90.6;

	printf("roll=%d\n",s.roll);
	printf("name=%s\n",s.name);
	printf("marks=%.2f",s.marks);
	return 0;
	
}