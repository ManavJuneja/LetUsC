#include<stdio.h>
void modify(int *arr, int n);
int main(){
	int i;
	static int arr[]= {1,2,3,4,5,6,7,8,9,10};
	printf("\nOriginal Array : \n");
	for(i = 0; i < 10; i++){
		printf("%d ",arr[i]);
	}
	modify(arr,10);
	printf("\nNew Array : \n");
	for(i = 0; i < 10; i++){
		printf("%d ",arr[i]);
	}
}
void modify(int *arr, int n){
	int i;
	for(i = 0; i < 10; i++){
		*arr = *arr * 3;
		arr++;
	}
}
