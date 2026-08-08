// MULTIPLE INHERITANCE

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
	string name;
	int rollNo;
};

class Teacher{
public:
	string subject;
	double salary;
};

class TA : public Student,public Teacher{
public:
		string researchArea;
};
int main(){
	TA t1;
	t1.name="tonystark";
	t1.subject = "enginnering";

	cout<<t1.name<<endl;
	cout<<t1.subject<<endl;
	return 0;
}