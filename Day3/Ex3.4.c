#include<stdio.h>
int main(){
	printf("Enter the number");
	int n;
	scanf("%d",&n);
	if(n < 0){
		n = n*-1;
	}
	printf("Absolute value of number entered is %d", n);
	return 0;
}
