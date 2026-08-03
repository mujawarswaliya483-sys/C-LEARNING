#include<iostream>
using namespace std;

struct stu{
	int marks; //int 4bytes
	float avg; //float 4 bytes
	double salary; //double 8bytes
};

union stu2{
	int marks; //int 4 bytes
	float avg; // float 4 bytes
	double salary; // double 8 bytes
	// the memory is get created for heighest byte double 
	// has heighest bytes hence the memory of double get printed
};

int main(){
	struct stu s1;
	union stu2 s2;

	cout<<"size of structure is="<<sizeof(s1)<<endl;
	cout<<"size of union is="<<sizeof(s2)<<endl;
	return 0;
}