#include<stdio.h>
int calsum(int x,int y,int z);//formal arguments
int main(){
	int a,b,c,sum;
	printf("Enter any three numbers");
	scanf("%d%d%d",&a,&b,&c);
	sum = calsum(a,b,c);//actual arguments
	printf("Sum is %d",sum);

}
int calsum(int x,int y, int z){
	int d;
	d = x + y + z;
	return(d);
}
