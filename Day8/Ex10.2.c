#include<stdio.h>
int sum(int);
int main(){
	int ans;
	ans = sum(0);
	printf("Answer is : %d",ans);
	return 0;
}
int  sum(int n){
	int ans;
	ans = 0;
	if(n == 25){
		return ans;
	}ans = n + sum(++n);
	return ans;
}
