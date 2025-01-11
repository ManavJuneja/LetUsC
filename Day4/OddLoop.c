#include<stdio.h>
int main(){
	char another;
	int num;
	do{
		printf("Enter a number ");
		scanf("%d",&num);
		printf("Square of %d is %d",num,num*num);
		printf("Want to enter another number y/n");
		fflush(stdin);//this function flushes out the data remaining in the buffer 
		scanf("%c",&another);
	}while(another == 'y');
	return 0;
}
