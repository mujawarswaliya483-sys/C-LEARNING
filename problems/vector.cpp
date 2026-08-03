// #include<iostream>
// #include<vector>
// using namespace std;
// // vectors are dynamic 
// int main(){
// 	// declaring vectors
// 	vector<int>arr; //vector created.
// 	vector<int>arr1(6);
// 	vector<int>arr2(3,9); //3 is the size of the vector and 9 is the values in the vector

// 	// printing values

// 	// for(int i=0;i<3;i++){
// 	// 	cout<<arr2[i]<<" ";
// 	// }

// cout<<"taking input in the vector: "<<endl;

// for(int i=0;i<6;i++){
// 	cin>>arr1[i];
// }

// cout<<"printing the vector: "<<endl;

// for(int i=0;i<6;i++){
// 	cout<<arr1[i]<<" ";
// }
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
// 	vector<int>arr;
// 	arr.push_back(5);
// 	arr.push_back(13);
// 	arr.push_back(12);
// 	arr.push_back(10);
// 	arr.push_back(50);
// 	arr.push_back(40);
// 	// vector functions.
// 	// arr.pop_back();
// 	// arr.front();
// 	// arr.back();
// 	arr.at(3);
// 	cout<<arr.size()<<endl;

// 	for(int i=0;i<arr.size();i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// }


// common functions.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int>arr;

	arr.push_back(12);
	arr.push_back(40);
	arr.push_back(30);
	arr.push_back(20);
	arr.push_back(10);

	for(int i=0;i<arr.size();i++){
 		cout<<arr[i]<<" ";
 	}
 	cout<<endl;

 	// sort(arr.begin(),arr.end());
 	sort(arr.rbegin(),arr.rend());
 	 cout<<"after sorting:"<<endl;
 	 for(int i=0;i<arr.size();i++){
 	 	cout<<arr[i]<<" "<<endl;
 	 }

    auto it = find(arr.begin(),arr.end(),30);

    if(it != arr.end()){
    	cout<<distance(arr.begin(),it);
    }else{
    	cout<<"element not found"<<endl;
    }

 }
