#include<stdio.h>
int main(){
	int i,j;
	float sum=0.0,fact;
	for(i = 1; i <= 7; i++){
		fact=1.0;
		for(j = 1; j <= i; j++){
			fact = fact*j;
		}
		sum = sum + i/fact;
	}
	printf("%f",sum);
	return 0;
}
