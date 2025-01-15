#include<stdio.h>
int bin(int);
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d", &num);
	bin(num);
	return 0;
}
int bin(int n){
	int r;
	r = n % 2;
	n = n / 2;
	if(n == 0){
		printf("\nThe binary equivalent is  %d",r);
		return(r);
	}else{
		bin(n);
	}
	printf("%d",r);
}
