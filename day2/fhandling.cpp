// Example of file handling...

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string str;
	// to create file we use ofstream
	// ofstream newFile(" C:\\Users\\HP\\Desktop\\CPP.txt");
	ifstream newFile(" C:\\Users\\HP\\Desktop\\CPP.txt");

	while(getline(newFile,str)) //getline is to get line by line information
	{
		cout<<str<<endl;
	}



	// cout<<"File created...";

	// newFile<<"CPP full cource";
	newFile.close();

	// if you dont use close() the the file will take 
	// unnecessary space
	return 0;
}
