#include<stdio.h>
int main(){
	printf("Enter the number for factorial : ");
	int n,i,ans;
	i=ans=1;
	scanf("%d",&n);
	
	while(n >= i){
		ans = ans * i;
		i++; 
	}
	printf("Factorial is : %d",ans);
	return 0;
}
