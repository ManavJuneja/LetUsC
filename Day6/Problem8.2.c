#include<stdio.h>
int power(int , int );
int main(){
	int a,b;
	printf("Enter power whose to calculate : ");
	scanf("%d",&a);
	printf("\nEnter times power should be calculated : ");
	scanf("%d",&b);
	int ans;
	ans = power(a,b);
	printf("Power is : %d",ans);
}
int power(int x, int y){
	int a=1,i;
	for(i=1; i<=y; i++){
		a *= x;
	}
	return (a);
}
