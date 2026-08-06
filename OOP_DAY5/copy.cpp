#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
	string name;
	string dept;
	string subject;
	float salary;
	

public:
	Teacher(){
		name="sanika";
		dept="mechanical";
		subject="java";
		salary=250000;
	}
	Teacher(string name,string dept,string subject,float salary){
		this->name=name;
		this->dept=dept;
		this->subject=subject;
		this->salary=salary;
	}
	void getInfo(){
		cout<<"name:"<<name<<endl;
		cout<<"dept:"<<dept<<endl;
		cout<<"subject:"<<subject<<endl;
		cout<<"salary:"<<salary<<endl;

	}
};





int main(){
	
	Teacher t1("shradhaa","cse","c++",25000);
	

	Teacher t2(t1);
	t2.getInfo(); //t1 data get copied in t2
}