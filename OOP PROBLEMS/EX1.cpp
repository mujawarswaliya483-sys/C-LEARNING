#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
	double salary;

public:
	string name;
	string subject;
    string dep;

    void changeDep(string newDept){
    	dep = newDept;
    }
    void setSalary(double s){
    	salary = s;
    }

    double getSalary(){
    	return salary;
    }
};

int main(){
	Teacher t1;
	t1.name="swaliya";
	t1.dep = "cse";
	t1.subject="c++";

	cout<<t1.name<<endl;
	t1.setSalary(22000);
	cout<<"salary is:"<<t1.getSalary();

}