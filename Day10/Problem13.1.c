#include<stdio.h>
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int temp;
	for(i = 0; i <= 9; i=i+2){
		temp = arr[i];
		arr[i]=arr[i+1];
		arr[i + 1]= temp;
	}
	for(i = 0; i <= 9 ; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
