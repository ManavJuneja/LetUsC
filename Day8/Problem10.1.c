#include<stdio.h>
int rsum(int);
int main(){
	int n,sum;
	printf("Enter the number want to sum");
	scanf("%d",&n);
	sum = rsum(n);
	printf("Sum of digit is %d\n",sum);
	return 0;
}
int rsum(int n){
	int s,rem;
	if(n != 0){
		rem = n % 10;
		s = rem + rsum(n/10);
	}else{
		return 0;
	}
	return s;
}
