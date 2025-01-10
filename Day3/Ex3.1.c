#include<stdio.h>
int main(){
	int num,revnum,n1,n2,n3,n4,n5;
	printf("Enter the number\n");
	scanf("%d",&num);
	n5 = num % 10;
	num = num /10;
	n4 = num % 10;
	num = num / 10;
	n3 = num % 10;
	num = num / 10;
	n2 = num % 10;
	num = num / 10;
	n1 = num % 10;
	num = num / 10;
	revnum = n5 * 10000 + n4 * 1000 + n3 * 100 + n2 * 10 + n1;
	if(revnum == num){
		printf("%d",revnum);
		printf("Not equal");
	}else{
		printf("%d",revnum);
		printf("Equal");
	}
	return 0;
}
