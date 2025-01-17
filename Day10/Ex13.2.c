#include<stdio.h>
int main(){
	int arr[6]={1,2,3,3,2,1};
	int i;
	int n=5;
	for(i = 0; i <= 5; i++){
		if(arr[i] != arr[n]){
			printf("Not equal");
		}else{
			n--;
		}
	}
	return 0;
}
