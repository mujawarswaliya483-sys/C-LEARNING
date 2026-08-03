#include<iostream>
using namespace std;

int main(){
	// int arr[2][3];
	// arr[0][0]=3;
	// arr[0][1]=5;
	// arr[0][2]=1;
	// arr[1][0]=54;
	// arr[1][1]=51;
	// arr[1][2]=50;
	  // second way of writing 2d array
	int arr[3][2]={{2,4},{5,10},{20,30}};
	// [3]=>row [2]=>column
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<" ";

		}
		cout<<endl;
	}

}