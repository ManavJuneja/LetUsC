#include<stdio.h>
int fib(int);
int main(){
	int n =0 ,i;
	int terms = 25;
	for(i = 1; i <= terms; i++ ){
		printf("%d\t",fib(n));
		n++;
	}
	return 0;
}
int fib(int n){
	if(n==0 || n==1){
		return n;
	}
	return fib(n - 1) + fib(n-2);
}
