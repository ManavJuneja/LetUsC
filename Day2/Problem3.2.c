#include<stdio.h>
#include<conio.h>
int main(){
	printf("Enter the number : ");
	int num;
	scanf("%d",&num);
	if(num % 2==0){
		printf("Even Number");
	}else{
		printf("Odd Number");
	}
}
