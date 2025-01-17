#include<stdio.h>
int main(){
	int arr[25],i,n;
	printf("Enter 25 elements : \n");
	for(i = 0; i<=24; i++){
		scanf("%d",&arr[i]);
	}
	n = *arr;
	for(i = 0; i <= 24; i++){
		if(*(arr + i) < n)
		n = *(arr + i);
	}
	printf("Smallest number : %d",n);
	return 0;
}
