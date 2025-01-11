#include<stdio.h>
int main(){
	int num,i;
	i = 2;
	printf("Enter a number ");
	scanf("%d",&num);
	while(i <= num-1){
		if(num % i == 0){
			printf("Not a prime number");
			break;
		}
		i++;
	}
	if(i == num)
	printf("Prime number\n");
}
