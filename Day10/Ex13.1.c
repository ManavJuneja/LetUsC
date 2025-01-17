#include<stdio.h>
int main(){
	int i, odd, even, pos, neg;
	int arr[10];
	printf("Enter numbers");
	for(i = 0; i <= 9; i++){
		scanf("%d",&arr[i]);
	}
	for(i = 0; i <= 9; i++){
		if(arr[i]>0){
			pos++;
		}else{
			neg++;
		}
		if(arr[i] %2 ==0){
			even++;
		}else{
			odd++;
		}
	}
	printf("Odd : %d Even : %d Positive : %d Negative : %d",odd,even,pos,neg);
	return 0;
}
