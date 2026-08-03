#include<stdio.h>


int main(){
int n,temp;
int arr[100];

	printf("enter number of elements:");
	scanf("%d",&n);

	printf("enter array elemets: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n-1;i++){
		for(int j=1;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	printf("sorted array:");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
		return 0;
	}
}