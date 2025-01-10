#include<stdio.h>
#include<conio.h>
int main(){
	int c,d,temp;
	printf("Enter value of c and d");
	scanf("%d%d",&c,&d);
	temp = c;
	c=d;
	d=temp;
	printf("c = %d \n d = %d",c,d);
	
	return 0;
}
