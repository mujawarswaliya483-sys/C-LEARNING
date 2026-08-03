// 1.two sum.

#include<iostream>
using namespace std;

 int main(){
 	int target=18;
 	int nums[] ={2,7,11,15};
 	int n=sizeof(nums)/sizeof(nums[0]);
 	for(int i=0;i<n;i++){
 		for(int j=1;j<n;j++){
 			if(nums[i]+nums[j]==target){
 				return{i,j};
 				break;
 			}
 		}
 	}
 }
