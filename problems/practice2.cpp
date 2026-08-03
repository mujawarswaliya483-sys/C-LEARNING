// 5.find the smallest element

// #include<iostream>
// using namespace std;


// int main(){
// 	int arr[5]= {20,10,40,60,70};
 
//     int min=arr[0];
// for(int i=1;i<5;i++){
// 	if(arr[i]<min){
// 		min=arr[i];	
// 	}
		
// }
// cout<<min<<endl;
// return 0;
// }

// Q6.find the largest element

// #include<iostream>
// using namespace std;

// int main(){
	
// 	int arr[5]={10,60,100,20,40};
// 	int max = arr[0];
// 	for(int i=1;i<5;i++){
// 		if(arr[i]>max){
// 			max=arr[i];
// 		}
// 	}

// 	cout<<max<<endl;
// }



// Q7.second largest element

// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={10,20,40,90,10};
// int largest=arr[0];
// int secLargest=-1;
// int n = sizeof(arr) / sizeof(arr[0]);

// for(int i=1;i<n;i++){
// 	if(arr[i]>largest){
//     secLargest=largest;
//     largest=arr[i];
    
//  	}
//  else if(arr[i] > secLargest && arr[i] != largest){
//  		secLargest=arr[i];
 		
//  	}
//  }
//  cout<<"second largest= "<<secLargest;
//  return 0;
// }


// Q8.cheak whether the array is sorted.

 // #include<iostream>
 // using namespace std;

 // int arr[]={10,20,30,40,50};
 
 // int main(){
 
 // 	for(int i=0;i<6;i++){
 // 		if(arr[i]>arr[i+1]){
 //            cout<<"not sorted"<<endl;
 // 		}else
 // 		cout<<"sorted"<<endl;
 // 	}
 // 	return 0;
 // }

// Q9.count the occurence of a given elements.

// #include<iostream>
// using namespace std;
// int main(){
// 	int n,arr[10],s;
// 	int count=0;
// 	cout<<"enter no. of elements:"<<endl;
// 	cin>>n;
// 	cout<<"enter array elements:"<<endl;
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
	
// 	cout<<"enter num to search:"<<endl;
// 	cin>>s;

// 	for(int i=0;i<n;i++){
// 		 if(s==arr[i]){
// 			count++;
// 		}
// 	}
// 	if(count > 0){
// 		cout<<"occurent count: "<<count<<endl;
// 	}else{
// 		cout<<"element not found"<<endl;
// 	}
// 	return 0;
// }


// Q.10 print the even and odd

// #include<iostream>
// using namespace std;

// int main(){
// int n,arr[10],i;

// n=sizeof(arr)/sizeof(arr[i]);

// cout<<"enter no. of ele:"<<endl;
// cin>>n;
// cout<<"enter array elements:"<<endl;
// for(i=0;i<n;i++){
// 	cin>>arr[i];
// }


// for(int i=0;i<n;i++){
// 	if(arr[i]%2==0){
// 		cout<<"even"<<endl;
// 	}
// 	else{
// 		cout<<"odd"<<endl;
// 	}

// }

// return 0;
// }

// Q 11. cheak if duplicates exists in the array

#include<iostream>
using namespace std;

int main(){
	int i,n,arr[10];
     
     n= sizeof(arr)/sizeof(arr[i]);

	cout<<"enter elements:"<<endl;
	cin>>n;

	cout<<"enter array elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	bool hasDuplicates = false;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				hasDuplicates = true;
				break;
			}

			}
			if(hasDuplicates){
			break;
		}

		}
		if(hasDuplicates){
			cout<<"has Duplicates"<<endl;
		}else{
			cout<<"not have Duplicates"<<endl;
		}
		return 0;
	}



