#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
	double salary;

public:
	Teacher(int ){

	}
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
	

}