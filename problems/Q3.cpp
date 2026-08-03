#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,8,7,6,9};
    int i ;
    int min = arr[0];

    for(i=0;i<5;i++){
        if(arr[i] < min){
        min = arr[i];
        }
    }
    cout<<"min = "<< min <<endl;
}