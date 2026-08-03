#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,8,7,6,9};
    int i ;
    int max = arr[0];

    for(i=0;i<5;i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
     cout << " max = " <<  max << endl;
    return 0;
}