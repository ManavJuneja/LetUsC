#include<stdio.h>
int main(){
	printf("Enter the number for Table : ");
	int n,i;
	scanf("%d",&n);
	for(i = 1; i <= 10; i++){
		printf("%d * %d = %d\n",n,i,i*n);
	}
	return 0;
}
