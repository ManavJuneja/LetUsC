#include<stdio.h>
int fact(int x);
int main(){
	printf("Enter the number");
	int n,ans;
	scanf("%d",&n);
	ans = fact(n);
	printf("%d",ans);
	
}
int fact(int x){
	int fac=1,i;
	for(i=1; i<=x; i++){
		fac = fac * i;
	}
	return (fac);
}
