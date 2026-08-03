#include<iostream>
using namespace std;
int main(){
	int sum;
	int arr[]={10,10,10,10,10};
	int n=sizeof(arr)/sizeof(arr[0]);

	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	return 0;
	}