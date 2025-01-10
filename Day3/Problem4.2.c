#include<stdio.h>
int main(){
	printf("Enter the any Character");
	char ch;
	scanf("%c",&ch);
	if(ch >= 65 && ch <= 90){
		printf("The Character is Upper-Case");
	}else if(ch >= 97 && ch <=122){
		printf("The Character is Lower-Case");
	}else if(ch >=0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 && ch >= 123 && ch<=127){
		printf("The Character is Special Symbol");
	}else{
		printf("The Character is Number");
	}
}
