#include<stdio.h>
int main(){
	printf("Enter size of array");
	int max;
	scanf("%d",&max);
	int i;
	int arr[max];
	printf("Enter array : ");
	for(i = 0; i <= max-1; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search and count : ");
	int tar,count = 0;
	scanf("%d",&tar);
	for(i = 0; i <= max; i++){
		if(arr[i] == tar ){
			count++;
		}
	}
	printf("Number of time %d occur in array is %d ",tar,count);
}
