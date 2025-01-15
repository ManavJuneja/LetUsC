#include<stdio.h>
void fac(int , int);
int main(){
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	fac(n,2);
	return 0;
}
void fac(int n, int i){
	if(i <= n){
		if(n % i ==0){
			printf("%d ",i);
			n= n/i;
		}else{
			i++;
		}
		fac(n,i);
	}
}
