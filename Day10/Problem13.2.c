#include<stdio.h>
int main(){
	int i,j;
	int arr2[5];
	int arr1[5] = {1,2,3,4,5};
	for(i = 4,j = 0; i >= 0, j <= 4; i--,j++){
		arr2[j] = arr1[i];
	}
	for(i = 0; i <= 4; i++){
		printf("%d ",arr2[i]);
	}
	return 0;
}
