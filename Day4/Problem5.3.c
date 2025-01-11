#include<stdio.h>
int main(){
	int n1,n2,ans=1,i=1;
	printf("Enter number n1 whose power to calculate n2 number of power");
	scanf("%d%d",&n1,&n2);
	while(n2 >= i){
		ans *= n1;
		i++;
	}
	printf("Answer is : %d",ans);
	return 0;
}
